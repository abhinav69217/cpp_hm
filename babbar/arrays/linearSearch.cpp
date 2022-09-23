#include <iostream>
using namespace std;

bool search(int arr[], int n, int key)
{

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
            return 1;
    }
    return 0;
}

int main()
{

    int arr[] = {5, 7, 4, 3, -1, -64, 0, 343, 3, 556, 86};

    int key;
    cout << "key??" << endl;
    cin >> key;

    bool found = search(arr, 20, key);

    if (found)
    {
        cout << "key is present" << endl;
    }
    else
    {
        cout << "not present" << endl;
    }

    return 0;
}