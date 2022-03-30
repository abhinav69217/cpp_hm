#include <iostream>
using namespace std;

int main()
{
    int A[10], n = 10;
    cout << "Enter Numbers For Array " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    int key;
    cout << "Enter Key " << endl;
    cin >> key;
    for (int i = 0; i < n; i++)
    {
        if (key == A[i])
        {
            cout << "foundAt: " << i;
            return 0;
        }
    }
    cout << "notFound ";
}