#include <iostream>
#include <climits>

using namespace std;

int getMax(int arr[], int n)
{

    int max = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int getMin(int arr[], int n)
{

    int min = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

int main()
{
    int n;
    cout<<"How many elements?"<<endl;
    cin >> n;

    int A[100];

    cout<<"Enter elements:";
    for (int i = 0; i < n; i++)
    {   
        cin >> A[i];
    }
    cout<<"Print elements:";
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    cout<<endl;

    
    cout <<"MAX-->"<< getMax(A,n) << endl;
    cout <<"MIN-->"<< getMin(A,n) << endl;

    return 0;
}