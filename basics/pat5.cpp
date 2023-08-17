#include<iostream>
using namespace std;

void pattern5(){

    int start=1;
    for(int i=1;i<6;i++){
        if(i%2==0) start=0;
        else start=1;
        for (int j=1;j<=i;j++){
            cout<<start;
            start=1-start;
        }
        cout<<endl;

    }
}

void pattern6(){
    int space=2*(4-1);
    for(int i=1;i<5;i++){
        for (int j=1;j<=i;j++){
            cout<<j;
        }
        for (int j=1;j<=space;j++){
            cout<<" ";
            
        }
        for (int j=i;j>=1;j--){
           cout<<j; 
        }
        space=space-2;
        cout<<endl;
    }

}


int main(){
    pattern6();
}