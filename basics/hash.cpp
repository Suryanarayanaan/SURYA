#include<bits/stdc++.h>
using namespace std;
//number hashing
// int main(){

//     int n;    
//     cout<<"enter the number of elemnts in array:";
//     cin>>n;
//     int arr[n];
//     for (int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     //hash array
//     int hash[13]={0};
//     for(int i=0;i<n;i++){
//         hash[arr[i]]+=1;

//     }

//     int q;
//     cout<<"enter how many queries u need:";
//     cin>>q;
//     while(q--){
//         int number;
//         cout<<"enter the number you want to be searched:";
//         cin>>number;
//         cout<<hash[number]<<endl;
//     }
//     return 0;


// }

int main(){
    string s;
    cout<<"enter the string: ";
    cin>>s;

    //hashing
    int hash[26]={0};
    for(int i=0;i<s.size();i++){
        hash[s[i] - 'a']++;
        
    }
    
    int q;
    cin>>q;
    cin.ignore();
    while(q--){
        char c;
        cout<<"enter the character:";
        
        cin>>c;

        cout<<hash[c-'a']<<endl;
    }
    return 0;

}




