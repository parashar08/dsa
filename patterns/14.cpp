#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    // for (int i=0; i<n; i++) {
    //     char ch = 'A';
    //     for (int j=0; j<=i; j++) {
    //         cout << ch << " ";
    //         ch++;
    //     }
    //     cout << "\n";
    // }

    for (int i=0; i<n; i++) {
        for (char ch = 'A'; ch <= 'A'+i; ch++) {
            cout << ch << " ";
        }
        cout << "\n";
    }
}