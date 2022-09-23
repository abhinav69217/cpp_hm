#include <iostream>
using namespace std;

void bubblesort(int a[], int n)
{

    for (int i = 0; i <= n-1; i++)
    {
        for (int j = 0; j <= n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
            }
        }
    }
}
int main()
{
    int n;
    cout<<"How Many Elements?";
    cin>>n;


    int arr[n];
    cout<<"Enter Elements:->";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    

    bubblesort(arr, n);

    for (auto x : arr)
    {
        cout << x << " ";
    }

    return 0;
}