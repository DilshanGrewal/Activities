#include<stdio.h>
#include<conio.h>
void main()
{
    int a=19;
    int f=0;
    if(a==2)
    {
        printf("\n %d is prime \n",a);
    }
    else
    {
        int i=2;
        while(i<a)
        {
            if(a%i==0)
            {
                f=1;
                printf("\n %d is not prime \n",a);
                break;
            }
            i++;
        }
        if(f==0)
        {
            printf("\n %d is prime \n",a);
        }
    }
}