# 这是一个用于嵌入式c语言开发的工具（持续更新中）2020.7.24<br>

## 程序运行在windows中，双击在tools\Debug中的main.exe运行<br>

### 一，寄存器辅助
单片机开发中经常会需要配置寄存器，有时候debug会需要查看寄存器的值，一般的debug会显示十六进制的数据<br>
该功能就是把十六进制数据转换成二进制数据，并用一个寄存器样式表格显示出来，使得数据在寄存器中的位置<br>
十分清晰。*目前仅支持8位与16位数据，32位数据由于长度问题，需要改进一下*<br>
![8位](http://m.qpic.cn/psc?/V52o58sF1Om7WA2cK9TD1YG4la1SnXbV/ruAMsa53pVQWN7FLK88i5vP1FTSQMBGwK32E.QjmYZ3ENEvL1F6D7YGoXH0A1Km.4oYfEJT5HR2.AGLIxvNbpY32w*M*hD*WTO9E3UXPh0o!/b&bo=HAIiAQAAAAADBx8!&rf=viewer_4&t=5)
