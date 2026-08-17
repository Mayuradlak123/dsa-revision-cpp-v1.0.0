#include "bits/stdc++.h"
using namespace std;

class Solution {
    public:
    int maxSubarraySum(vector<int>& arr) {
        // TODO: find the largest sum of a contiguous subarray
        // Hint: Kadane's Algorithm
        int maxSum=INT_MIN, currentSum=0;
        for (int i=0; i<arr.size(); i++){
            currentSum=currentSum+arr[i];
            if(currentSum>maxSum){
                maxSum=currentSum;
            }
            if(currentSum<0){
                currentSum=0;
            }
        }
        return maxSum;
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
    int maxSum = s.maxSubarraySum(arr);

    cout << "Largest contiguous subarray sum: " << maxSum << endl;

    return 0;
}
