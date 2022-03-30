#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double bsal;
    char grade;

    cout<<"Entry basic salary & Grade"<<endl;

    cin>>bsal>>grade;

    double totalsal;
    double hra =(0.20*bsal);
    double da =(0.50*bsal);
    double pf =(0.11*bsal);
    double allow;
        if (grade=='A'){
            allow=1700;
        }
        else if(grade=='B'){
            allow=1500;
        }
        else{
            allow=1300;
        }

    totalsal=(bsal+hra+da+allow-pf);
            cout<<llround(totalsal);

}