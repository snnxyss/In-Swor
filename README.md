2023-08-28 沙箱查杀状态良好
![image](https://github.com/snnxyss/In-Swor/assets/96976810/f1df9468-a9cf-43b0-8fb0-865cd30ad2df)
![image](https://github.com/snnxyss/In-Swor/assets/96976810/933093ef-4995-4eec-a981-c183962a4450)



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



2023-8-18 微步测试 状态良好
![image](https://github.com/snnxyss/In-Swor/assets/96976810/d8955acf-92cc-4f3a-aae4-1f24db377ffb)
沙箱记录：https://s.threatbook.com/report/file/ea24d4dbc1312ad0413736d4632c5cf4d3df189612aa1c52fb511982be463d21


2023-8-05 更新
mimikatz的shellcode文件会被360杀毒所杀，进行简单的处理，dat文件进行简单异或处理
![image](https://github.com/snnxyss/In-Swor/assets/96976810/da8b793d-2b0a-4841-9b0e-06b823f035e9)





2023-8-07 更新
bypassUAC功能 使用方法： 将payload.ini里的配置改为./config/BypassUAC.dat
运行BypassUAC.exe <command> 
![image](https://github.com/snnxyss/In-Swor/assets/96976810/a48bf7bb-e121-4f52-bc3a-ff333c5fba19)

![image](https://github.com/snnxyss/In-Swor/assets/96976810/b2e611d2-b6a1-42dc-b6d4-758500fbb3b4)





项目参考：
https://github.com/aahmad097/AlternativeShellcodeExec/tree/master
https://github.com/fatedier/frp
https://github.com/gentilkiwi/mimikatz
https://github.com/g3tsyst3m/elevationstation

