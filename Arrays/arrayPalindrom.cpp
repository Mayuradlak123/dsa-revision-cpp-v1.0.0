#include "bits/stdc++.h"
using namespace std;    

class Solution{
    public:
    bool isPalindrome(vector<int>& arr){
        int left=0,right=arr.size()-1;
        while(left<right){
            if(arr[left]!=arr[right]){
                return false;
            }
            else{
                left++;
                right--;
            }
        }
        return true;
    }
};

int main(){
    int n;
    cout<<"Enter the size of the array:"<<endl;
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the elements of the array:"<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    Solution s;
    if(s.isPalindrome(arr)){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    return 0;
}