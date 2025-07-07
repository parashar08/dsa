#include <iostream>
#include <vector>

using namespace std;

void moveAllZeroesToEnd(vector<int> &arr) {
    int n = arr.size();
    int k = -1;
    for (int i=0; i<n; i++) {
        if (arr[i] == 0) {
            k = i;
            break;
        }
    }
    if (k == -1) return;
    for (int i=k+1; i<n; i++) {
        if (arr[i] != 0) {
            swap(arr[k], arr[i]);
            k++;
        }
    }
}

void printArr(vector<int> &nums) {
    for (int x : nums) {
        cout << x << " ";
    }
    cout << "\n";
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

    moveAllZeroesToEnd(nums);
    printArr(nums);
}