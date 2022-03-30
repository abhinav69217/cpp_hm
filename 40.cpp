/*
   1
  232   
 34543
4567654
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
        int k=i;
        int spaces = 1;
        while (spaces <= n - i)
        {
            cout << " ";
            spaces = spaces + 1;
        }
        int j = 1;
        while (j <= i)
        {
            cout <<k;
            j++;
            k++;
        }
        j=i-1;
        while(j>=1){
            cout<<k-2;
            j--;
            k--;
        }

        cout << endl;
        i++;
    }
}