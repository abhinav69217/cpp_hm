#include<iostream>
using namespace std;
int main() {
	int i,n,res;
    int flag=1;
    cin>>n;

    for(i=1;i<1000;i++){

        res=((3*i)+2);
        if(res%4!=0 && flag<=n){
            cout<<res<<" ";
            flag++;
        }
    }
}