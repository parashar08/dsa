#include <iostream>
using namespace std;

// gcd(a, b) = gcd(a-b, b) where a > b apply recursive until a or b become 0 and other value will be gcd.

// gcd(a, b) = gcd(a % b, b) where a > b;
// greater % smaller goes until one of them become zero and other is GCD;

/*
lcm(a, b) = a*b / gcd(a,b)
*/

int findGCD(int a, int b) {
    while (a > 0 && b > 0) {
        if (a > b) a = a % b;
        else b = b % a;
    }

    return (a == 0) ? b : a;
}

int main() {
    int n1, n2;
    cin >> n1 >> n2;

    int ans = findGCD(n1, n2);
    cout << ans << "\n";
}