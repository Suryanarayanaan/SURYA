#include<iostream>
using namespace std;


void pattern1(){
    for(int i=0;i<5;i++){
       for(int j=0;j<=i;j++){
        cout<<"* ";
       }
      cout<<endl;  
    }

}
int main(){
    
    pattern1();
    
}
