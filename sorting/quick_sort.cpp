#include <iostream>
using namespace std;

int pivot(int arr[], int low, int high) {
    int pEle = arr[low];
    int i = low;
    int j = high;

    while(i < j) {
        while (i <= high && arr[i] <= pEle) {
            i++;
        }
        while (j >= low && arr[j] > pEle) {
            j--;
        }
        if (i < j) swap(arr[i], arr[j]);
    }
    swap(arr[low], arr[j]);

    return j;
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pivotIndex = pivot(arr, low, high);

        quickSort(arr, low, pivotIndex-1);
        quickSort(arr, pivotIndex+1, high);
    }
}

void printArray(int arr[], int n) {
    for (int i=0; i<n; i++) cout << arr[i] << " ";
    cout << "\n";
}

int main() {
    int n;
    cin >> n;

    int arr[n];

    for (int i=0; i<n; i++) cin >> arr[i];

    quickSort(arr, 0, n-1);

    printArray(arr, n);
}