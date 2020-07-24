# 这是一个用于嵌入式c语言开发的工具集合（持续更新中）<br>

‘程序运行在windows中，双击在tools\Debug中的main.exe运行’<br>

## 更新日志<br>
*2020.4.24:添加了32位寄存器的支持,以及部分函数的注释<br>

## 目录
components：各个模块的.c .h文件
Debug：编译生成的文件
根目录：main.c 主程序
mydefine :一些宏定义，类型定义等


### 一，寄存器辅助
单片机开发中经常会需要配置寄存器，有时候debug会需要查看寄存器的值，一般的debug会显示十六进制的数据<br>
该功能就是把十六进制数据转换成二进制数据，并用一个寄存器样式表格显示出来，使得数据在寄存器中的位置<br>
十分清晰。<br>
![8位](http://m.qpic.cn/psc?/V52o58sF1Om7WA2cK9TD1YG4la1SnXbV/ruAMsa53pVQWN7FLK88i5vP1FTSQMBGwK32E.QjmYZ3ENEvL1F6D7YGoXH0A1Km.4oYfEJT5HR2.AGLIxvNbpY32w*M*hD*WTO9E3UXPh0o!/b&bo=HAIiAQAAAAADBx8!&rf=viewer_4&t=5)
![16](http://m.qpic.cn/psc?/V52o58sF1Om7WA2cK9TD1YG4la1SnXbV/ruAMsa53pVQWN7FLK88i5u01JE6tfF31oA9p0A9vb13xobDTdHoluB.RwVs5lZ*kCXUfSFXMiRGKDewuKM95RNjEkfnz73fOA0BqvlTtxGw!/b&bo=Hwa6AQAAAAADB4A!&rf=viewer_4&t=5)
![32](http://m.qpic.cn/psc?/V52o58sF1Om7WA2cK9TD1YG4la1SnXbV/ruAMsa53pVQWN7FLK88i5j*X.xwumfbWmrl63biriHR2222sA7TJlKjAVLjK3dGrl8QMhna4n*P*k5d8tRovxW.uf*9.Yb4DgcR0w4b76A0!/b&bo=DAYMAgAAAAABByQ!&rf=viewer_4&t=5)
*zhesyuandianma
<br>
`gaoliang`
<br>
>1
>>2
>>>3