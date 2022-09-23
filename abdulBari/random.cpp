#include<iostream>
using namespace std;

class DEMO{
    static int count;
    public:
    DEMO(){
        count++;
    }
    DEMO (int p){
        count+=p;

    }
    void display(){
        cout<<count;
    }
};
int DEMO::count=0;


int main()
{
    DEMO obj;
    DEMO obj1(8);
    obj1.display();
    obj.display();

}
void MIN(){
    int i=11;
    cout<<i;
    static int j=12;
    j=j+1;
    cout<<j;
}