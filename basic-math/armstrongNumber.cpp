#include <iostream>
#include <math.h>
using namespace std;

bool checkArmstrong(int n) {
    int dupOfN = n;
    int digits = 0;
    int temp = n;

    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    int sum = 0;
    temp = n;
    while (temp > 0) {
        int rem = temp % 10;
        sum += pow(rem, digits);
        temp /= 10;
    }

    return (dupOfN == sum);
}

int main() {
    int n;
    cin >> n;

    int ans = checkArmstrong(n);
    cout << ans << "\n";
}