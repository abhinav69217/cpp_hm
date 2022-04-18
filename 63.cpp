#include<iostream>
using namespace std;

int main()
{
    int arr[]={1,2,3,4,5,6,7};
    for(int x:arr){
        cout<<x<<" ";
    }

    cout<<"\n";

    float arr1[]={1.2,2.3,3.4,4.5,5.6,6.7,7.8};
    for(float x:arr1){
        cout<<x<<" ";
    }
    cout<<"\n";

    char arr2[]={'A',68,'C',71};
    for(auto x:arr2){
        cout<<x<<" ";
    }
    return 0;
}