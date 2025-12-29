#include<stdio.h>
#include<conio.h>
void main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=5;j>i;j--)
        {
            printf("1");
        }
        for(int k=1;k<=i;k++)
        {
            if(k==1)
            {
                printf("1");
                continue;
            }
            printf("0");
        }
        printf("\n");
    }
}