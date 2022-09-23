#include<iostream>
using namespace std;

void reverse(int arr[],int n){
    int start=0;
    int end= n-1;
    while (start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;   
    }   
}
int main()
{
    int n;
    cin>>n;

    int arr[10];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    reverse(arr,n);
    for (int i = 0; i < 10; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}