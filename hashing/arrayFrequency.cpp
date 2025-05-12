#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];

    for (int i=0; i<n; i++) cin >> arr[i];

    // pre-compute
    unordered_map<int, int> umpp;
    for (int i=0; i<n; i++) {
        umpp[arr[i]]++;
    }

    int q;
    cin >> q;
    while (q--) {
        int number;
        cin >> number;

        // fetch
        cout << "ANS: " << umpp[number] << "\n";
    }
    cout << "\n";
}