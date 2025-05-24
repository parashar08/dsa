#include <iostream>
using namespace std;

int removeDuplicate(int arr[], int n) {
    int i = 0;
    for (int j=1; j<n; j++) {
        if (arr[j] != arr[i]) {
            arr[i+1] = arr[j];
            i++;
        }
    }
    return i+1;
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

    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }

    int uniqeElement = removeDuplicate(arr, n);
    cout << "unique element: " << uniqeElement << "\n";
    printArray(arr, n);

    return 0;
}