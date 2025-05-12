#include <iostream>
using namespace std;

void printNtimes(int n) {
    if (n < 1) {
        return;
    }
    cout << "priyanshu\n";
    printNtimes(n-1);
}

int main() {
    int n;
    cin >> n;

    printNtimes(n);
}