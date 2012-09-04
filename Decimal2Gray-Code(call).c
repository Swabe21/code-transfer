/*将此程序修改成可供调用的版本*/
/*Try to make this function be able to call by main function*/
/*该程序仍只能在Windows下运行，稍后会写适用于Linux的版本
**This programme is still limited to run in Windows OS, Linux version will come soon.*/
#include<stdio.h>
#include<stdlib.h>
char *Deci2Gray (int n)
{
    int g;//g代表格雷码；g for gray-code;
    char *s;//用于储存格雷码的二进制表达式；to place the binary number of gray-code;
    s=(char*)malloc(sizeof(s)*2);
    g = n^(n>>1);//将十进制数右移一位并取异或；
    itoa(g, s, 2);
    return s;
}
int main (void)
{
    int d;//d代表十进制数；d for decimal;
    printf("Please input the interge decimal number you wish to convert:\n");
    scanf("%d",&d);
    printf("The Gray-Code of this number is:\n");
    printf("%s",Deci2Gray(d));
    return 0;
}
