#include <iostream>
#include <vector>
using namespace std;

void merge(int arr[], int low, int mid, int high) {
    vector<int> temp;

    int i = low;
    int j = mid+1;

    while (i <= mid && j <= high) {
        if (arr[i] <= arr[j]) {
            temp.push_back(arr[i]);
            i++;
        } else {
            temp.push_back(arr[j]);
            j++;
        }
    }

    while (i <= mid) {
        temp.push_back(arr[i]);
        i++;
    }
    while (j <= high) {
        temp.push_back(arr[j]);
        j++;
    }

    for (int k=0; k<temp.size(); k++) {
        arr[low + k] = temp[k];
    }
}

void mergeSort(int arr[], int low, int high) {
    if (low < high) {
        int mid = (low + high) / 2;
        
        mergeSort(arr, low, mid);
        mergeSort(arr, mid+1, high);

        merge(arr, low, mid, high);
    }
}

void printArray(int arr[], int n) {
    for (int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main() {
    int n;
    cin >> n;

    int arr[n];

    for (int i=0; i<n; i++) cin >> arr[i];

    mergeSort(arr, 0, n-1);

    printArray(arr, n);
}