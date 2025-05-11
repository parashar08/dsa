#include <bits/stdc++.h>
using namespace std;

void findGCD(int n1, int n2) {
    for (int i=min(n1, n2); i>=1; i--) {
        if (n1 % i == 0 && n2 % i == 0) {
            cout << "GCD is " << i << "\n";
            break;
        }
    }
}

int main() {
    int n1, n2;
    cin >> n1 >> n2;

    findGCD(n1, n2);
}