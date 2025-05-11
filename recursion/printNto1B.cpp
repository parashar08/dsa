#include <iostream>
using namespace std;

// print from n to 1 using backtracking doesn't use n-1.

void printNto1(int i, int n) {
    if (i > n) return;
    printNto1(i+1, n);
    cout << i << " ";
}

int main() {
    int n;
    cin >> n;

    printNto1(1, n);
    cout << "\n";
}