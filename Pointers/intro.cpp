#include<iostream>
using namespace std;

int main()
{
    int i=10;
    cout<<&i<<endl;   //&--> adrressOf
    int*p=&i;
    cout<<p<<endl;
    cout<<*p<<endl;     //backs the value stored in it
    return 0;
    //      /////
    // int a = 100, b = 200;
    // int *p = &a, *q = &b;
    // cout<<p<<endl;
    // cout<<q<<endl;
    // p = q;
    // cout<<p<<endl;  

    // int a = 7;
    // int b = 17;
    // int *c = &b;
    // cout<<c<<endl;

//      int a = 50;
//  int *ptr = &a;
//  cout << (*ptr)++ <<' ';
//  cout << a << endl;


    // int *ptr = 0;
    // int a = 10;
    // *ptr = a;
    // cout << *ptr << endl;

}