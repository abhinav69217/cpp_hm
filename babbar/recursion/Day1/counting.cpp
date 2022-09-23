#include<iostream>
using namespace std;

void printCounting(int n){

    if(n==0){
        return;
    }
    //reverse
    cout<<n<<" ";
    printCounting(n-1);

    //forward
    printCounting(n-1);
    cout<<n<<" ";

}

int main()
{
    int n;
    cin >> n;

    printCounting(n);

    return 0;
}