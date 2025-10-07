#include<stdio.h>
#include<conio.h>
int main()
{
    int a[5];
    printf("Enter data in array: \n");
    for(int i=0;i<=4;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Entered data in array is: \n");
    for(int j=0;j<=4;j++)
    {
        printf("%d\n",a[j]);
    }
    return 0;
}