#include <iostream>
using namespace std;

int main()
{
    int a[10][10], b[10][10], mult[10][10], r1, c1, r2, c2, i, j, k;

    cin >> r1 >> c1;
    cin >> r2 >> c2;

    if (c1 != r2)
    {
        cout << "Cannot be multiplied";
        return 0;
    }

    cout << endl
         << "enter elements of matrix 1" << endl;
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cout << "Enter elememt a " << i + 1 << j + 1 << " : ";
            cin >> a[i][j];
        }
    }

    cout << endl
         << "enter elements of matrix 2" << endl;
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cout << "Enter elememt b " << i + 1 << j + 1 << " : ";
            cin >> b[i][j];
        }
    }

    for (i = 0; i < r1; ++r1)
    {
        for (j = 0; j < c2; ++j)
        {
            mult[i][j] = 0;
            for (k = 0; k < c1; ++k)
            {
                mult[i][j] += a[i][j] * b[i][j];
            }
        }
    }

    cout << endl
         << "Output Matrix: " << endl;
    for (i = 0; i < r1; ++i)
        for (j = 0; j < c2; ++j)
        {
            cout << " " << mult[i][j];
            if (j == c2 - 1)
                cout << endl;
        }

    return 0;
}