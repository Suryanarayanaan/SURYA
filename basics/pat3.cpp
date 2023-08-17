#include<iostream>
using namespace std;

void pattern3(){
    for(int i=1;i<=7;i++){
        for(int j=1;j<7-i+1;j++){
            cout<<j;
        }
    cout<<endl;    
    }
}
int main(){
    pattern3();
}