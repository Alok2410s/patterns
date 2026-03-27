#include<iostream>
using namespace std;
int main(){
    int a=5;

    for(int i=0; i<=a; i++){
        for(int j=1; j<=i; j++){
            // jab j=1 and j=a-i utha hojayega num
            cout<<j<<" ";
        }
       // for(int k=i; k>=1; k--){
            // jab k=1 and k<=i hona chahiye also remove k from cout
           // cout<<k<<" ";
        //}
        cout<<endl;
    }
    return 0;
}