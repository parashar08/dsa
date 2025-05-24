#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> twoSum(vector<int> nums, int target) {
    unordered_map<int, int> umpp;

    for (int i=0; i<nums.size(); i++) {
        umpp[nums[i]] = i;
    }

    for (int i=0; i<nums.size(); i++) {
        int compliment = target - nums[i];

        if (umpp.find(compliment) != umpp.end() && umpp[compliment] != i) {
            return {umpp[compliment], i};
        }
    }
    return {};
}

int main() {
    int n, target;
    cin >> n >> target;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) cin >> nums[i];

    vector<int> ans = twoSum(nums, target);

    for (int i = 0; i < ans.size(); i++) cout << ans[i] << " ";
    cout << "\n";
}