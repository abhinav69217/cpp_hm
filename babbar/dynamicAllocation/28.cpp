#include <iostream>
using namespace std;

int getsum(int *arr, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

// void upadate(int &n)
// {
//     n++;
// }

int main()
{
    // int i = 5;
    // int &j = i;
    // cout << "i " << i << endl;
    // cout << "j " << j << endl;

    // // pass by reference
    // int n = 5;
    // cout << "Before " << n << endl;
    // upadate(n);
    // cout << "After " << n << endl;

    // char ch = 'a';
    // cout << sizeof(ch) << endl;

    // char *c = &ch;
    // cout << sizeof(c) << endl;

    // int *arr= new int[5];

    int n;
    cin >> n;
    int *arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int ans = getsum(arr, n);
    cout << ans;

    return 0;
}