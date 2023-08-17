#include<iostream>
using namespace std;

void pattern4(){
    for(int i=0;i<=4;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int j=0;j<8-2*i+1;j++){
            cout<<"*";

        }
        for(int j=0;j<i;j++){
            cout<<" ";
        }cout<<endl;
    }
}
int main(){
    pattern4();
}