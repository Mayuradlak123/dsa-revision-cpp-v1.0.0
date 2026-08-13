#include "bits/stdc++.h"
using namespace std;

class Negetive{
    public:
    void negetiveArrange(vector<int>& arr) {
       int left =0, right=arr.size()-1;
       while(left<right){
        if(arr[left]<0){
            swap(arr[left],arr[right]);
            left++;
            right--;
        }
        else{
            left++;
        }
       }
    }
};

int main (){
    int n;
    cout<<"Enter array size:"<<endl;
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter array elements:"<<endl;
    for ( int i=0; i<n; i++){
        cin>>arr[i];
    }
    Negetive negetive;
    negetive.negetiveArrange(arr);
    for ( int x : arr){
        cout<<x<< " ";
    }
    return 0;
}