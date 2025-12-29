#include<stdio.h>
#include<conio.h>
void main()
{
    for(int i=1;i<=6;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if(i%2==0)
            {
                printf("%d",j);
            }
            else
            {
                printf("#");
            }
        }
        printf("\n");
    }
}