// With the help of STL
#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        vector<vector<int>> ans;

        sort(nums.begin(), nums.end());
        for (int i = 2; i < nums.size(); i += 3) {
            if (nums[i] - nums[i - 2] <= k) {
                ans.push_back({nums[i - 2], nums[i - 1], nums[i]});
            } else {
                return {};
            }
        }
        return ans;
    }
};

int main() {
    Solution solution;

    // Example usage
    vector<int> nums = {3, 1, 2, 6, 4, 5};
    int k = 2;

    // Divide and display the array
    vector<vector<int>> result = solution.divideArray(nums, k);

    // Display the result
    for (const auto& group : result) {
        for (int num : group) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
