/*
    pushes the maximum to the last by adjacent swapping
    at one complete round of ajacent swapping maximum element of an array is at last

    TC: O(n^2) for worst and average case
    TC: O(n) for best case if we do some optimization
    here, didSwap is optimization it check in first iteration if we doesn't perform any swap means array is already sorted so break out of loop!
*/

#include <iostream>
using namespace std;

void bubble_sort(int arr[], int n) {
    for (int i=0; i<n; i++) {
        int temp;
        int didSwap = 0;
        for (int j=0; j<n-1-i; j++) {
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                didSwap = 1;
            }
        }
        if (didSwap == 0) break;
        cout << "runs\n";
    }
}

int main() {
    int n;
    cin >> n;

    int arr[n];

    for (int i=0; i<n; i++) cin >> arr[i];

    bubble_sort(arr, n);

    for (int i=0; i<n; i++) cout << arr[i] << " ";
    cout << "\n";
}