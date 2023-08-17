#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;
    int n;
    cout<<"enter the number of elements in they array:";
    cin>>n;
    int target=14;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        
    }
    
    int left=0,right=n-1;
    
     while(left<right){
        int sum=arr[left]+arr[right];
        if(sum==target){
            cout<<"yes";
            break;
        }else if(sum<target) left++;
        else 
        {right--;}
       
        }
      cout<<"no";
return 0;
}

// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
        
//     }
// };