#include<iostream>
using namespace std;
//no need to define data type of functions ,, just use template
template <class T>
T maxim(T x,T y){
    // return a>b?a:b;

    if(x>y)
    return x;
    else
    return y;
}

// int maxim(int a, int b){
//     return a>b?a:b;    
// }

// float maxim(float a, float b){
//     return a>b?a:b;
// }

int main()
{
    cout<<maxim(12,14)<<endl;
    cout<<maxim(2.3f,1.4f)<<endl;
    return 0;
}