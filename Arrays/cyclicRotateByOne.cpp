#include "bits/stdc++.h"
using namespace std;

class Solution {
    public:
    void cyclicRotate(vector<int>& arr) {
        // TODO: rotate array by one position to the right
        // last element should come to front
        int temp=arr[arr.size()-1];
        for (int i=arr.size()-1; i>0; i--){

            arr[i]=arr[i-1];
        }

        arr[0]=temp;
    }
};

int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    Solution s;
    s.cyclicRotate(arr);

    cout << "After rotation: ";
    for (int x : arr) cout << x << " ";
    cout << endl;

    return 0;
}
