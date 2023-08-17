#include<bits/stdc++.h>
using namespace std;


void printdivi(int n){
    vector<int> ls;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0)
        {ls.push_back(i);
        if((n/i) != i){
            ls.push_back(n/i);
        }
        
        }
        
        }
        sort(ls.begin(),ls.end());
        for(auto it: ls){
            cout<<it<<" ";
        }
        
    }


void gcd(int n,int m){
    int minvalue=min(n,m);
    int gcd=1;
    for(int i = minvalue ;i >=1;i++ ){
        if(n%i==0 && m%i==0){
            cout<<i;
            gcd=i;
        }

    }
}

void print(int n,int i){
    if(n<i){
        return;
    }
    print(n,i+1);
    cout<<i<<endl;
}

int main(){
    print(4,1);
//     int n;
//     int lastdigit;

//     cout<<"enter a nuber:";
//     cin>>n;
//     int revnum=0;
//     while(n>0){
//         lastdigit=n%10;
    
//         n=n/10;
//         revnum=(revnum*10)+lastdigit;
//     }
//     //cout<<"reverse number is :"<<revnum;

// if(n=revnum){

//     cout<<"true";
// }else{cout<<"false";}
// printdivi(36);
// gcd(20,40);

}



