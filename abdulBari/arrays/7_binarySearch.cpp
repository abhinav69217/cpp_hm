#include <iostream>
using namespace std;

int main()
{
    int A[10] = {6, 8, 13, 17, 20, 22, 25, 28, 30, 35};
    int l = 0, h = 0, n = 10, key, mid;

    cout << "Enter key ";
    cin >> key;
    while (l <= h)
    {
        mid = (l + h) / 2;
        if (key == A[mid])
        {
            cout << "Found At " << mid;
            return 0;
        }
        else if (key < A[mid])
        {
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << "Not found ";
}