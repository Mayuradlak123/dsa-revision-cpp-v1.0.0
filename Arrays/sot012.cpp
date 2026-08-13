#include "bits/stdc++.h"
using namespace std;

class Sort {
    public:
    void sort(vector<int>& arr) {
     int low=0,mid=0, high=arr.size()-1;
     while(mid<high){
          if(arr[mid]==0){
            swap(arr[low],arr[mid]);
            low++; 
            mid++;
          }
          else if( arr[mid]==1){
          mid++;
          }
          else{
            swap(arr[mid],arr[high]);
            high--;
            mid++;
          }
     }
    }
};

int main() {
    int n;
    cout << "Enter array size:" << endl;
    cin >> n;
    vector<int> arr(n);
    cout << "Enter array elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    Sort s;
    s.sort(arr);
    for (int x : arr) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}
