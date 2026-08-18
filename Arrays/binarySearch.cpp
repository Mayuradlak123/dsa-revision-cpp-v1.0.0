#include "bits/stdc++.h"
using namespace std;

class Solution {
    public:
    int binarySearch(vector<int>& arr, int target) {
        // TODO: implement binary search
        long long low=0,high=arr.size()-1;
        while(low<=high){
            long long mid=(high+low)/2;
            if(arr[mid]==target){
                return mid;
            }
            else if(arr[mid]>target){
                high=mid-1;
            }
            else {
                low=mid+1;
            }
        }
        return -1;
    }
};

int main() {
    int n;
    cout << "Enter the size of sorted array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the sorted elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    int target;
    cout << "Enter the target to search: ";
    cin >> target;

    Solution s;
    int idx = s.binarySearch(arr, target);
    if (idx != -1) {
        cout << "Element found at index: " << idx << endl;
    }
    else{
        cout <<"Element Not Found";
    }
    return 0;
}
