#include <iostream>
using namespace std;

// what if you write code after function call in recursion (backtracking)

void printOneToN(int n) {
    if (n < 1) return;
    printOneToN(n-1);
    cout << n << " ";
}

int main() {
    int n;
    cin >> n;

    printOneToN(n);
    cout << "\n";
}