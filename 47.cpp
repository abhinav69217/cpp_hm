#include <iostream>
using namespace std;
int main(){
    char ch;
    int num=0,chr=0,space=0;
    while(ch != '$'){
        ch =cin.get();
        if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')){
            chr++;
        }
        else if(ch >= '0' && ch<='9'){
            num++;
        }
        else if(ch==' '){
            space++;
        }   
        else if(ch=='\n'){
            space++;
        }   
        else if(ch=='\t'){
            space++;
        }   
    }
    cout<<chr<<" "<<num<<" "<<space;
} 
