#include<stdio.h>
#include<conio.h>
void main()
{
    int c=0;
    int a=1;
    int b=1;
    printf("%d\n",a);
    printf("%d\n",b);
    for(int i=1;i<10;i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d\n",c);
    }
}