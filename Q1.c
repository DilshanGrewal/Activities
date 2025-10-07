#include<stdio.h>
#include<conio.h>
void main()
{
    for(int i=1;i<=100;i++)
    {
        if(i%5==0)
        {
            continue;
        }
        else
        {
            printf("%d\n",i);
        }
    }
}