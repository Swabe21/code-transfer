/*���˳����޸ĳɿɹ����õİ汾*/
/*Try to make this function be able to call by main function*/
/*�ó�����ֻ����Windows�����У��Ժ��д������Linux�İ汾
**This programme is still limited to run in Windows OS, Linux version will come soon.*/
#include<stdio.h>
#include<stdlib.h>
char *Deci2Gray (int n)
{
    int g;//g��������룻g for gray-code;
    char *s;//���ڴ��������Ķ����Ʊ��ʽ��to place the binary number of gray-code;
    s=(char*)malloc(sizeof(s)*2);
    g = n^(n>>1);//��ʮ����������һλ��ȡ���
    itoa(g, s, 2);
    return s;
}
int main (void)
{
    int d;//d����ʮ��������d for decimal;
    printf("Please input the interge decimal number you wish to convert:\n");
    scanf("%d",&d);
    printf("The Gray-Code of this number is:\n");
    printf("%s",Deci2Gray(d));
    return 0;
}
