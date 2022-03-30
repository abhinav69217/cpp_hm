#include<iostream>
using namespace std;

int main()
{
    int A[2][3]={{2,5,9},{6,9,15}};
    int B[2][3]={{2,5,9},{6,9,15}};
    int C[2][3];
    // int A[2][3]={{2,5,9,6,9,15}};  (or by this we can initialize elements)
    
    
////////////////////////printingElementsOf2D_Arrays;

    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout<<A[i][j]<<" ";
    //     }
    //     cout<<endl; 
    // }

////////////////////////adding2Matrices;
    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         C[i][j]=A[i][j]+B[i][j];
    //     }
    // }
    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j  = 0; j < 3; j++)
    //     {
    //         cout<<C[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

///////////////////////////usingForEachLoop
    // for (auto &x:A)
    // {
    //     for (auto& y: x)
    //     {
    //         cout<<y<<" ";
    //     }
    //     cout<<endl;
    // }
    return 0;
}