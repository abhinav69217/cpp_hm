#include<iostream>
using namespace std;

int main()
{
    int x=10;
    int &y=x;      //initialize when ever it is declared 
                    //& refers to same memory,no new memory is alloted
    cout<<x<<endl;
    y++;
    x++;
    cout<<x<<endl;
    cout<<x<<" "<<y<<endl;
    return 0;
}