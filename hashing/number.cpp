#include <iostream>
#include <vector>
using namespace std;


// size of int 10^8, long 10^12 and long long 10^18
// maximun 10^6 size of array we can declare inside function
// globally 10^7


int main() {
    int n;
    cin >> n;

    int arr[n];

    for (int i=0; i<n; i++) cin >> arr[i];

    // precompute
    int hash[13] = {0};
    for (int i=0; i<n; i++) {
        hash[arr[i]] += 1;
    }
    
    int q;
    cin >> q;
    while (q--) {
        int number;
        cin >> number;

        // fetch
        cout << hash[number];
    }
    cout << "\n";
}