#include <iostream>
using namespace std;

int findLargest(int arr[], int n) {
    int maxEle = arr[0];
    for (int i=1; i<n; i++) {
        if (arr[i] > maxEle) {
            maxEle = arr[i];
        }
    }

    return maxEle;
}

int main() {
    int n;
    cin >> n;

    int arr[1000];

    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }

    int maxElement = findLargest(arr, n);
    cout << maxElement << "\n";

    return 0;
}