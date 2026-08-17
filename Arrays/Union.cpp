#include "bits/stdc++.h"
using namespace std;
class Solution{
    public:
    set<int> findUnion(vector<int>& arr1, vector<int>& arr2){
        set<int> unionArray;
        int i=0,j=0;
       while (i<arr1.size() && j<arr2.size()){
        unionArray.insert(arr1[i]);
        unionArray.insert(arr2[j]);
        i++;
        j++;
       }
       while(i<arr1.size()){
        unionArray.insert(arr1[i]);
        i++;
       }
       while(j<arr2.size()){
        unionArray.insert(arr2[j]);
        j++;
       }
        return unionArray;
    }

};

int main(){
    int n,m;
    cout<<"Enter the size of the array:";
    cin>>n;
    cout<<"Enter the size of the array:";
    cin>>m;
    vector<int> arr1(n);
    vector<int> arr2(m);
    cout<<"Enter the elements of the array:";
    for(int i=0; i<n; i++){
        cin>>arr1[i];
    }
    cout<<"Enter the elements of the array:";
    for(int i=0; i<m; i++){
        cin>>arr2[i];
    }
    Solution s;
    set<int> unionArray = s.findUnion(arr1, arr2);
    for (auto x : unionArray){
        cout<< x << " ";
    }
    return 0;
}