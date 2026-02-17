#include <iostream>
using namespace std;
int main()
{
    int n=66;
    if(n>=90)
    {
        cout<<"A"<<endl;
    }
    if(n>=80 && n<90)
    {
        cout<<"B"<<endl;
    }
    if(n>=60 && n<80)
    {
        cout<<"C"<<endl;
    }
    if(n>=50 && n<60)
    {
        cout<<"D"<<endl;
    }
    if(n>=33 && n<50)
    {
        cout<<"E"<<endl;
    }
    if(n<33)
    {
        cout<<"F"<<endl;
    }
}