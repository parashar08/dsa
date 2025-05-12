/*
    -> takes an element and placed it at its correct position
    -> first element is sorted itself
    -> you go to next and check on left side for your correct position

    TC: O(n^2) for worst and average
    TC: 0(n) for best case
*/

#include <iostream>
using namespace std;

void insertion_sort(int arr[], int n) {
    for (int i=1; i<n; i++) {
        int key = arr[i];
        int j = i-1;
        while (j >= 0 && arr[j] > key) {
            arr[j+1] = arr[j];
            j--;
            cout << "runs\n";
        }
        arr[j+1] = key;
    }
}

int main() {
    int n;
    cin >> n;

    int arr[n];

    for (int i=0; i<n; i++) cin >> arr[i];

    insertion_sort(arr, n);

    for (int i=0; i<n; i++) cout << arr[i] << " ";
    cout << "\n";
}