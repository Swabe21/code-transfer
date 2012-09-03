#include<stdio.h>
#include<stdlib.h>
int main (void)
{
    printf("Please input the decimal number you wish to transfer:\n");
    int d,g;
    char *s;
    scanf("%d",&d);
    g = d^(d>>1);
    printf("The Gray-Code of this number is\n");
    printf("%s",itoa(g, s, 2));
    return g;
}
