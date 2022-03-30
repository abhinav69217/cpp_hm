#include <iostream>
using namespace std;
int main(){
    int a, b;
    cout<<"Enter two Numbers:-"<<endl;
    cin>>a>>b;

    if (a==b){
    cout<<"They are equal"<<endl;
    }else if (a>b){
        cout<<"a is greater"<<endl;
    }else {
        cout<<"b is greater"<<endl;
    }

    cout<<"\n"<<endl;

    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;

    if (n%2==0){
        cout<<"Even"<<endl;
    }else{
        cout<<"Odd"<<endl;

    }

}