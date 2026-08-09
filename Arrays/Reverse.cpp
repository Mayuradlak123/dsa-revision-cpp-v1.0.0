#include "bits/stdc++.h"
using namespace std;

class Reverse{
public:
   void reverse(vector<int>&arr){
      int size=arr.size();
      int start=0;
      int end=size-1;

      while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
      }
    }
};
int main(){
    vector<int> arr;
    int n;
    cout<<"Enter array size:"<<endl;
    cin>>n;
    cout<<"Enter array elements:"<<endl;
    for ( int i=0; i<n; i++){
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    Reverse r;
    r.reverse(arr);
    for (int x : arr){
        cout<<x<< " ";
    }
    return 0;
}
