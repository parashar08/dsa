#include <iostream>
#include <vector>

using namespace std;

vector<int> findUnionOfTwoSortedArray(vector<int> &nums1, vector<int> &nums2) {
    int n1 = nums1.size();
    int n2 = nums2.size();
    int i = 0;
    int j = 0;

    vector<int> unionArr;
    while(i < n1 && j <n2) {
        if (nums1[i] <= nums2[j]) {
            if (unionArr.size() == 0 || unionArr.back() != nums1[i]) {
                unionArr.push_back(nums1[i]);
            }
            i++;
        } else {
            if(unionArr.size() == 0 || unionArr.back() != nums2[j]) {
                unionArr.push_back(nums2[j]);
            }
            j++;
        }
    }

    while(j < n2) {
        if(unionArr.size() == 0 || unionArr.back() != nums2[j]) {
            unionArr.push_back(nums2[j]);
        }
        j++;
    }

    while (i < n1) {
        if (unionArr.size() == 0 || unionArr.back() != nums1[i]) {
            unionArr.push_back(nums1[i]);
        }
        i++;
    }

    return unionArr;
}

int main() {
    int n1, n2;
    cin >> n1 >> n2;

    vector<int> nums1;
    vector<int> nums2;

    for (int i=0; i<n1; i++) {
        int x;
        cin >> x;
        nums1.push_back(x);
    }
    for (int i=0; i<n2; i++) {
        int x;
        cin >> x;
        nums2.push_back(x);
    }
    
    vector<int> ans = findUnionOfTwoSortedArray(nums1, nums2);

    for (int x : ans) {
        cout << x << " ";
    }
    cout << "\n";
}
