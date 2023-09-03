#include<bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cout<<"enter a number:";
    cin>>x;
    int revn=0;
    int temp=x;
    while(temp!=0 ){
        int digit =temp%10;
        revn=(revn*10)+digit;
        temp=temp/10;

    }
    cout<<"the reversed number is:"<<revn;

}