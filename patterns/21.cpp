#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // for (int i=0; i<n; i++) {
    //     for (int j=0; j<=0; j++) {
    //         cout << "* ";
    //     }

    //     if (i == 0 || i == n-1) {
    //         for (int j=0; j<n-2; j++) {
    //             cout << "* ";
    //         }
    //     } else {
    //         for (int j=0; j<n-2; j++) {
    //             cout << "  ";
    //         }
    //     }

    //     for (int j=0; j<=0; j++) {
    //         cout << "* ";
    //     }
    //     cout << "\n";
    // }

    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (i == 0 || j == 0 || i == n-1 || j == n-1) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << "\n";
    }
}