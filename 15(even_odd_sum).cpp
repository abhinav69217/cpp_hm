#include <iostream>
using namespace std;
int main(){
    int n, sum_even=0, sum_odd=0,rem;
    cout<<"Enter Number"<<endl;
    cin>>n;

    while(n>0){
        rem=n%10;
        if(rem%2==0){
            sum_even=sum_even+rem;
        }
        else{
            sum_odd=sum_odd+rem;
        }
        n=n/10;
    }
    cout<<sum_even<<" "<<sum_odd;
}