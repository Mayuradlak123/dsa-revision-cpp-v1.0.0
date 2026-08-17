#include "bits/stdc++.h"
using namespace std;

class Solution {
    public:
    bool isElementExist(vector<int>& arr, int target){
        for (int x : arr){
            if (x==target){
                return true;
            }
        }
        return false;
    }
    set<int> findIntersection(vector<int>& arr1, vector<int>& arr2) {
        set<int> result;
        int j = 0;
        // TODO: implement intersection logic
        while ( j<arr2.size()){
            if(isElementExist(arr1,arr2[j])){
                result.insert(arr2[j]);
            }
            j++;
        }
        return result;
    }
};

int main() {
    int n, m;
    cout << "Enter the size of array 1: ";
    cin >> n;
    cout << "Enter the size of array 2: ";
    cin >> m;

    vector<int> arr1(n), arr2(m);

    cout << "Enter the elements of array 1: ";
    for (int i = 0; i < n; i++) cin >> arr1[i];

    cout << "Enter the elements of array 2: ";
    for (int i = 0; i < m; i++) cin >> arr2[i];

    Solution s;
    set<int> result = s.findIntersection(arr1, arr2);

    cout << "Intersection: ";
    for (int x : result) cout << x << " ";
    cout << endl;

    return 0;
}
