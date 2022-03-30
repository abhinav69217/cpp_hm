#include<iostream>
using namespace std;

int main()
{
    
    int arr[]={1,2,3,4,5,6,7};
    int n=7, sum=0;

    for (int i = 0; i < n; i++)
    {
        sum+=arr[i];
    }
    cout<<sum;

    return 0;
}