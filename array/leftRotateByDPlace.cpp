#include <iostream>
using namespace std;

void leftRotateByD(int arr[], int n, int d) {
    int temp[100];
    for (int i=0; i<d; i++) {
        temp[i] = arr[i];
    }

    int j = 0;
    for (int i=d; i<n; i++) {
        arr[j] = arr[i];
        j++;
    }
    for (int i=0; i<d; i++) {
        arr[d+i+1] = temp[i];
    }
}

void printArr(int arr[], int n) {
    for (int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main() {
    int n, d;
    cin >> n >> d;

    int arr[1000];
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }

    leftRotateByD(arr, n, d);
    printArr(arr, n);
}