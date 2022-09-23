#include<iostream>
using namespace std;

int binary2decimal(int n){
    int p=1;
    int ans=0;
    while(n!=0){
        int last_digit=n%10;
        ans=ans+last_digit*p;
        p=p*2;
        n=n/10;
    }
    return ans;
}


int main()
{

    int n;
    cin>>n;
    cout<<binary2decimal(n);
    
    return 0;
}