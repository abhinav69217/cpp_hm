#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"HOW MANY ELEMEMTS?"<<endl;
    cin>>n;

    int arr[100];
    int sum=0;

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        sum+=arr[i];
    }
    cout<<"SUM--> "<<sum;

    return 0;
}