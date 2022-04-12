#include<iostream>
using namespace std;

int sum(int a, int b){
    return a+b;
}

float sum(float a, float b){
    return a+b;
}
//return type is not considered in function overloading

int sum(int a, int b,int c){
    return a+b+c;
}


int main()
{
    cout<<sum( 10,5)<<endl;
    cout<<sum( 12.5f,3.4f)<<endl;// make them float literals for float fnx
    cout<<sum( 10,20,3)<<endl;
    return 0;
}