#include<iostream>
using namespace std;
//make c default arguements   //it'll combime 2 fnxs of adding 2 nos & 3 nos.
int sum(int a, int b,int c=0){
    return a+b+c;
}
// default arguements will be done from right side without skipping anyone
int max(int a=0, int b=0, int c=0){
    return a>b && a>c?a:(b>c?b:c);      
}

int main()
{
    cout<<sum(10,5)<<endl;
    cout<<sum(12,13,14)<<endl;

    cout<<max()<<endl;
    cout<<max(10)<<endl;
    cout<<max(10,13)<<endl;
    cout<<max(10,13,15)<<endl;

    return 0;
}