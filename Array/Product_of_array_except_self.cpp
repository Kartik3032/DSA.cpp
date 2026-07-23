#include <iostream>
#include <vector>
using namespace std;

vector<int> productExceptSelf(const vector<int>& nums) {
    int n = nums.size();
    vector<int> ans(n, 1);

    for (int i = 1; i < n; ++i) {
        int prod =1;
        for (int j = 0; j < n; ++j) {
            if (i!= j) {
                prod *= nums[j];
            }
        }
        ans[i] = prod;
    }
    return ans;
}