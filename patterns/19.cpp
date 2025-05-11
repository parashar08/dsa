#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i=0; i<n; i++) {
        // stars
        for (int j=0; j<n-i; j++) {
            cout << "* ";
        }

        // space 
        for (int j=0; j<2*i; j++) {
            cout << "  ";
        }

        // stars
        for (int j=0; j<n-i; j++) {
            cout << "* ";
        }
        cout << "\n";
    }

    for (int i=0; i<n; i++) {
        for (int j=0; j<=i; j++) {
            cout << "* ";
        }

        for (int j=0; j<2*n-(2*i+2); j++) {
            cout << "  ";
        }

        for (int j=0; j<=i; j++) {
            cout << "* ";
        }
        cout << "\n";
    }
}