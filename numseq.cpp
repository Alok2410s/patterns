#include<iostream>
using namespace std;
int main(){
    int a = 4;
    char ch = 'a';

    for(int i=1; i<=a; i++){
        for(int j=1; j<=a; j++){
            
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
    return 0;
}