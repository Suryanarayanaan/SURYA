#include<bits/stdc++.h>
using namespace std;


void explainvector(){

    vector<int>v1(5);
    v1.push_back(2);
    v1.push_back(4);
    v1.push_back(1);
    v1.push_back(8);
    v1.push_back(7);
    vector<int>::iterator it=v1.end();

    
    v1.insert(v1.begin()+1,10);
    cout<<v1[1];

}


int main(){
    explainvector();
}