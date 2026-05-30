#include <iostream>
using namespace std;
int main()
{
    double c,s;
    cout<<"0"<<endl;
    string a;
    cin>>a;
    while (a!="=")                                          //while loop to get the sum, calcuation will go on until string is"="
    {
        if (a!="*" && a!="/" && a!="+" && a!="-")           //checking if string is symbol or not
        {
            c=stod(a);                                      //conversion of string to number
            cin>>a;
            continue;
        }
        else if(a=="*")                                     //if to get product
        {
            cin>>a;
            s=c*stod(a);
            c=s;
            cin>>a;
            continue;
        }
        else if(a=="/")                                     //if to devide
        {
            cin>>a;
            s=c/stod(a);
            c=s;
            cin>>a;
            continue;
        }
        else if(a=="+")                                     //if for addition
        {
            cin>>a;
            s=c+stod(a);
            c=s;
            cin>>a;
            continue;
        }
        else if(a=="-")                                     // if for subtraction
        {
            cin>>a;
            s=c-stod(a);
            c=s;
            cin>>a;
            continue;
        }
        else
        {
            continue;
        }
    }
    cout<<c<<endl;                                          //output
}