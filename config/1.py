def xor_encrypt(data, key):
    encrypted_data = bytearray()
    for i in range(len(data)):
        encrypted_data.append(data[i] ^ key[i % len(key)])
    return encrypted_data


file_path = 'warpzone.dat'
with open(file_path, 'rb') as file:
    binary_data = file.read()


key = b'SecretKey'


encrypted_data = xor_encrypt(binary_data, key)


output_path = 'encrypted.bin'
with open(output_path, 'wb') as file:
    file.write(encrypted_data)