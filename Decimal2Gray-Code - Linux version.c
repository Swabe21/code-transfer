/*该程序能在Windows和Linux下运行。
**This programme is able to run in both Windows and Linux system.*/
#include<stdio.h>
#include<stdlib.h>
void Deci_2_Gray_binary(int g, char *str)
{
int *num, i = 0, k;
int n;
n = g^(g>>1);
num=(int*)malloc(sizeof(num)*4);
while (n) {
k = n % 2;
n = (n - k) / 2;
num[i++] = k;
}
k = 0;
while (i--) {
str[k++] = num[i] + '0';
}
str[k] = 0;
}
int main (void)
{
    int d;//d代表十进制数；d for decimal;
    char *s=(char*)malloc(sizeof(s)*2);
    printf("Please input the interge decimal number you wish to convert:\n");
    scanf("%d",&d);
    Deci_2_Gray_binary (d,s);
    printf("The Gray-Code of this number is:\n");
    puts(s);
    return 0;
}
