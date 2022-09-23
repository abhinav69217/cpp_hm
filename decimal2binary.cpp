#include <iostream>
using namespace std;

int decimal2binary(int N)
{

    int ans = 0;
    int p = 1;

    while (N > 0)
    {
        int rem = N % 2;
        ans = ans + p * rem;
        p = p * 10;
        N = N / 2;
    }
    return ans;
}

int main()
{

    int N;
    cin >> N;
    cout << decimal2binary(N);

    return 0;
}