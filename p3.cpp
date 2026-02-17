#include <iostream>
using namespace std;
int mul(int a,int b)
{
    return a*b;
}
void swap(int &a,int &b)
{
    a=a+b;
    b=a-b;
    a=a-b;
}
int main()
{
    int l=12;
    int m=62;
    int c=mul(m,l);
    cout<<"product of "<<l<<" and "<<m<<" = "<<c<<endl;
    int a=6;
    int b=3;
    cout<<"before swapping"<<endl;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    swap(a,b);
    cout<<"after swapping"<<endl;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    return 0;
}