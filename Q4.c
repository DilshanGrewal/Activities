#include<stdio.h>
#include<conio.h>
void main()
{
    int f=0;
    int n=15;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            f=1;
            break;
        }
    }
    if(f==0)
    {
        printf("no is prime");
    }
    else
    {
        printf("no is not prime");
    }
}