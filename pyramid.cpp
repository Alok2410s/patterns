#include<iostream>
using namespace std;
int main(){
    int a ;
    cout<<"Enter the number";
    cin>>a;

    for(int i=1; i<=a; i++){
        for(int j=1; j<=a-i; j++){ 
            // jab ham j=1 and j=a-i karte hai right side right angled triangle banta hai
            cout<< " ";
        }
        for(int k=1; k<=i; k++){
            cout<<" *";
        }
        cout<<endl;
    }
    return 0;   
}