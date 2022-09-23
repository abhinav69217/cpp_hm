#include <iostream>
using namespace std;

int main()
{
    // float f = 10.5;
    // float p = 2.5;
    // float *ptr = &f;
    // (*ptr)++;
    // *ptr = p;
    // cout << *ptr << endl
    //      << f << endl
    //      << p;

    int *ptr = 0;
    int a = 10;
    *ptr = a;
    cout << *ptr << endl;

    return 0;
}