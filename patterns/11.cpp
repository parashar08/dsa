#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // int bit = 1;
    // for (int i=0; i<n; i++) {
    //     int bits = bit;
    //     for (int j=0; j<i+1; j++) {
    //         cout << bits << " ";
    //         (bits == 1) ? bits = 0 : bits = 1;
    //     }
    //     (bit == 1) ? bit = 0 : bit = 1;
    //     cout << "\n";
    // }

    int start = 1;
    for (int i=0; i<n; i++) {
        (i % 2 == 0) ? start = 1 : start = 0;
        for (int j=0; j<i+1; j++) {
            cout << start << " ";
            start = 1 - start;
        }
        cout << "\n";
    }
}