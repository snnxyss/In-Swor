# In-Swor
一个简单内网渗透工具免杀 目前mimikatz,frp,elevationstation.
用了比较简单的加载方式
![image](https://github.com/snnxyss/In-Swor/assets/96976810/cb8dc28f-0660-49e6-9e8c-e70b5cb635a8)
更改payload.ini下的加载路径，加载不同的功能，比如mimikatz
![image](https://github.com/snnxyss/In-Swor/assets/96976810/50ce7163-3968-44d0-9898-8acf17aba962)
![image](https://github.com/snnxyss/In-Swor/assets/96976810/425f6f87-c216-4011-a195-0ad9f111d5f2)
免杀defender
![image](https://github.com/snnxyss/In-Swor/assets/96976810/7bab516a-27ea-4f83-a619-72684f7ab8d6)
免杀360
![image](https://github.com/snnxyss/In-Swor/assets/96976810/642e27ca-c708-4c07-a274-4aeb6b88a0d5)
除了内存执行config下的固定功能外，还可以使用cs或者msf生成payload.bin(注意需要x86)进行加载上线。



2023-8-05 更新
mimikatz的shellcode文件会被360杀毒所杀，进行简单的处理，dat文件进行简单异或处理
![image](https://github.com/snnxyss/In-Swor/assets/96976810/da8b793d-2b0a-4841-9b0e-06b823f035e9)




项目参考：
https://github.com/aahmad097/AlternativeShellcodeExec/tree/master
https://github.com/fatedier/frp
https://github.com/gentilkiwi/mimikatz
https://github.com/g3tsyst3m/elevationstation

