#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> s;
                        // LIFO
    s.push(2);
    s.push(3);

    cout <<"TOP-> "<< s.top() << endl;

    s.pop();
    cout <<"TOP-> "<< s.top() << endl;

    if (s.empty())
    {
        cout << "Stack is Empty" << endl;
    }
    else
    {
        cout << "Stack is Not Empty" << endl;
    }

    cout<<"SIZE-> "<<s.size();

    return 0;
}