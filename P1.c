#include<stdio.h>
#include<conio.h>
int main()
{
    int n=4586;
    int s=0;
    int r=0;
    while(n!=0)
    {
        r=n%10;
        s=(s*10)+r;
        n=n/10;
    }
    printf("result = %d",s);
    return 0;
}