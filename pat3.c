#include<stdio.h>
#include<conio.h>
void main()
{
    for(int i=7;i>=1;i--)
    {
        for(int j=7;j>i;j--)
        {
            printf("#");
        }
        for(int k=1;k<=i;k++)
        {
            if(k==1)
            {
                printf("#");
                continue;
            }
            printf("$");
        }
        printf("\n");
    }
}