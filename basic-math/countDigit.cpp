#include <iostream>
#include <math.h>
using namespace std;

int countDigit(int n) {
    // int count = 0;
    // while (n > 0) {
    //     count++;
    //     n /= 10;
    // }
    // return count;

    // another way
    int count = (int) log10(n) + 1;
    return count;
}

int main() {
    int n;
    cin >> n;

    int ans = countDigit(n);
    cout << ans << "\n";
}