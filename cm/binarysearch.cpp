#include<iostream>
using namespace std;

int binary(int arr[],int n, int key){
    int s=0;
    int e=n-1;
    int mid;
    while (s<=e)
    {
        mid=(s+e)/2;

        if (arr[mid]==key){
            return mid;
        }
        else if (arr[mid]>key)
        {
            e=mid-1;
        }  
        else
            s=mid+1;
    }
    return -1;
    
}

int main()
{

    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int key; 
    cout<<"KEY???"<<endl;
    cin>>key;
    int index = binary(arr,10,key);

    if (index!=-1)
    {
        cout<<key <<" is present at index "<< index<<endl;
    }
    else{
        cout<<"not present"<<endl;
    }
    

    
    return 0;
}