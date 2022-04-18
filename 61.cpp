#include<iostream>
using namespace std;

int main()
{
    float netSal,basSal,allowance,deductions;

    cout<<"Enter Basic Salary ";
    cin>>basSal;
    cout<<"Enter Allowance ";
    cin>>allowance;
    cout<<"Enter Deductions ";
    cin>>deductions;

    netSal=basSal+basSal*allowance/100-basSal*deductions/100;
    cout<<netSal<<endl;
    return 0;
}