using namespace std;
#include <algorithm>
#include <iostream>
#include <vector>

class Solution {
   public:
    // O(n^2) solution
    //  vector<int> twoSum(vector<int>& nums, int target) {
    //      int a, b;
    //      for (int i = 0; i < nums.size(); i++) {
    //          for (int j = i + 1; j < nums.size(); j++) {
    //              if (nums[i] + nums[j] == target) {
    //                  a = i;
    //                  b = j;
    //                  break;
    //              }
    //          }
    //      }
    //      return {a, b};
    //  }

    vector<int> twoSum(vector<int>& nums, int target) {
        int a, b;      
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] + nums[j] == target) {
                    a = i;
                    b = j;
                    break;
                }
            }
        }
        return {a, b};
    }
};
int main() {
    Solution sol;
    vector<int> nums = {3, 2, 4};
    int target = 6;
    vector<int> result = sol.twoSum(nums, target);
    cout << "The two numbers are: " << result[0] << " and " << result[1];
    return 0;
}