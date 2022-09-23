#include<iostream>
using namespace std;

void reachHome(int src, int dest){

    cout<<src<<" "<<dest<<endl;

    if(src == dest){
        cout << "reached"<<endl;
        return;
    }
    src++;

    reachHome(src, dest);
}

int main()
{
    int destination = 10;
    int source = 1;

    reachHome(source,destination);

    return 0;
}