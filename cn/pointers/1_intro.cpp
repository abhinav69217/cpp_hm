#include<iostream>
using namespace std;

int main()
{
    int i=10;
    cout<<&i<<endl;

    int *p =&i;

    int *q=p;

    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<sizeof(i)<<endl;
    cout<<sizeof(p)<<endl;



    float f =10.2;
    float * pf= &f;

    double d =122.83;
    double * pd=&d;


    /////////////////////////////


    i++;
    cout<<i<<endl;
    cout<<*p<<endl;

    int a=*p;
    a++;
    cout<<a<<endl;
    cout<<*p<<endl;

    i=12;
    cout<<a<<endl;
    cout<<*p<<endl;

    *p=23;
    cout<<a<<endl;
    cout<<*p<<endl;

    (*p)++;
    cout<<a<<endl;
    cout<<*p<<endl;

    return 0;
}