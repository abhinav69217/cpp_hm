#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    int *p = &x;

    cout << x<<endl; //value of x
    cout << &x<<endl; // adrress of x
    cout << p<<endl; // adrress of x
    cout << &p<<endl; // adrress of p
    cout << *p<<endl; //data of x
    return 0;
}