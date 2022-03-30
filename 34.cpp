/*
   1
  12
 123
1234
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int spaces = 1;
        while (spaces <= n - i)
        {
            cout << " ";
            spaces = spaces + 1;
        }
        int no = 1;
        while (no <= i)
        {
            cout << no;
            no++;
        }
        cout << endl;
        i++;
    }
}