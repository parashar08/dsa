#include <iostream>
#include <vector>

using namespace std;

void reverseArr(vector<int> &arr, int start, int end) {
    while (start <= end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main() {
    int n;
    cin >> n;

    vector<int> nums;
    for (int i=0; i<n; i++) {
        int x;
        cin >> x;
        nums.push_back(x);
    }

    reverseArr(nums, 0, nums.size()-1);

    for (auto it = nums.begin(); it != nums.end(); ++it) {
        cout << *it << " ";
    }
    cout << "\n";
}