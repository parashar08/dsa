#include <iostream>
using namespace std;

void leftRotate(int arr[], int n) {
    int firstEle = arr[0];
    for (int i=1; i<n; i++) {
        arr[i-1] = arr[i];
    }

    arr[n-1] = firstEle;
}

void printArr(int arr[], int n) {
    for (int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main() {
    int n;
    cin >> n;

    int arr[1000];

    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }

    leftRotate(arr, n);
    printArr(arr, n);
}