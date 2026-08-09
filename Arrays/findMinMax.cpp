#include "bits/stdc++.h"
using namespace std;

class findMax{
    public:
    int max(vector<int>&arr){
        int maxElement=arr[0];
        for ( int i=1; i<arr.size(); i++){
            if(arr[i]>maxElement){
                maxElement=arr[i];
            }
        }
        return maxElement;
    }

    int min(vector<int>&arr){
        int minElement=arr[0];
        for ( int i=1; i<arr.size(); i++){
            if(arr[i]<minElement){
                minElement=arr[i];
            }
        }
        return minElement;
    }
};

int main(){
    int n;
    cout<<"Enter array size:"<<endl;
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter array elements:"<<endl;
    for ( int i=0; i<n; i++){
        cin>>arr[i];
    }
    findMax fm;
    cout<<"The max element in array is: "<<fm.max(arr)<<endl;
    return 0;
}