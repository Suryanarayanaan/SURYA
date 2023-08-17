#include<iostream>
using namespace std;

void pattern2(){
      for (int i=1;i<6;i++){
        for(int j=1;j<=i;j++){
            cout<< j ;
        }
        cout<<endl;
      }
}
int main (){
    pattern2();
    return 0;
}