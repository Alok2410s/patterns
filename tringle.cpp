#include<iostream>
using namespace std;
int main(){
    int a = 5;
    
    for(int i=1; i<=a; i ++){
        // ulta karne ke liye isme i = 0 se start karna padega
        for(int j=1; j<=i; j++){
            // or isme j=i and j<=a karna padega
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}