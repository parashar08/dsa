// here we select minimum element and swap with unsorted array first element
// initially whole array is unsorted

// TC: 0(n^2) tc for best, average and worst

#include <iostream>
using namespace std;

void selection_sort(int arr[], int n) {
    for (int i=0; i<n-1; i++) {
        int mini = i;
        for (int j=i; j<n; j++) {
            if (arr[j] < arr[mini]) {
                mini = j;
            }
        }
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
    }
}

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i=0; i<n; i++) cin >> arr[i];
    selection_sort(arr, n);
    for (int i=0; i<n; i++) cout << arr[i] << " ";
    cout << "\n";
}