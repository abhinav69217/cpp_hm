#include <iostream>
using namespace std;

int main()
{
//     int a = 5;
//     int *ptr = &a;
//     int *ptr=0;
//     ptr=&a;
//     cout << a << endl;
//     cout << *ptr << endl;
//     cout << ptr << endl;
//     cout << sizeof(a) << endl;
//     cout << sizeof(ptr) << endl;

    int i=3;
    int *t=&i;
    *t=*t+1;
    cout<<(*t)++<<endl;
    cout<<(*t)<<endl;
    cout<<(t)<<endl;
    t=t+1;
    cout<<(t);

    return 0;
}