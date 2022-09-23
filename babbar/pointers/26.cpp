#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {2, 5, 6};
    cout << arr << " " << &arr[0] << endl;
    cout << &arr[1] << endl;
    cout << *arr << endl;
    cout << *arr + 1 << endl; //value at first index + 1;;
    cout << *(arr + 1) << endl; //value at second index ;;
    cout<<arr[2]<<" "<<*(arr+2)<<endl;
    cout<<2[arr]<<" "<<*(arr+2);

    return 0;
}