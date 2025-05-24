#include <iostream>
#include <climits>
using namespace std;

int findSecondLargest(int arr[], int n) {
    int secondSmall = INT_MIN;
    int max = arr[0];
    for (int i=1; i<n; i++) {
        if (arr[i] > max) {
            secondSmall = max;
            max = arr[i];
        }
        if (arr[i] < max && arr[i] > secondSmall) {
            secondSmall = arr[i];
        }
    }
    return secondSmall;
}

int findSecondSmallest(int arr[], int n) {
    int secondSmall = INT_MAX;
    int min = arr[0];
    for (int i=1; i<n; i++) {
        if (arr[i] < min) {
            secondSmall = min;
            min = arr[i];
        }
        if (arr[i] > min && arr[i] < secondSmall) {
            secondSmall = arr[i];
        }
    }
    return secondSmall;
}


int main() {
    int n;
    cin >> n;

    int arr[n];

    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }

    int secondSmallest = findSecondSmallest(arr, n);
    int secondLargest = findSecondLargest(arr, n);

    cout << secondLargest << "\n" << secondSmallest << "\n";
    
    return 0;
}