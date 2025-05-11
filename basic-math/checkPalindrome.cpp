#include <iostream>
using namespace std;

bool checkPalindrome(int n) {
    int copyOfN = n;
    int revNum = 0;
    while (copyOfN > 0) {
        int rem = copyOfN % 10;
        revNum = revNum * 10 + rem;
        copyOfN /= 10;
    }

    return (revNum == n) ? true : false;
}

int main() {
    int n;
    cin >> n;

    bool ans = checkPalindrome(n);
    cout << ans << "\n";
}