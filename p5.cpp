#include <iostream>
using namespace std;

class A
{
    public:
    int x;
    A ()
    {
        x=10;
    }
    void disp ()
    {
        cout << x << endl;
    }
};
int main ()
{
    A obj;
    obj.disp();
}