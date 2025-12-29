#include<stdio.h>
#include<conio.h>
void main()
{
    int n=1;
    for(int i=1;i<=7;i++)
    {
        for(int j=7;j>=i;j--)
        {
            if(n==1)
            {
                printf("%d",j);
            }
            else if(n==2)
            {
                printf("$");
            }
            else
            {
                printf("*");
            }
        }
        n++;
        if(n==4)
        {
            n=1;
        }
        printf("\n");
    }
}