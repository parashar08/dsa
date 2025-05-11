#include <bits/stdc++.h>
using namespace std;

void printAllDivisor(int n) {
    vector<int> ls;

    for (int i=1; i*i<=n; i++) {
        ls.push_back(i);
        if (i != (n/i)) {
            ls.push_back(n/i);
        }
    }

    sort(ls.begin(), ls.end());
    for (auto it : ls) {
        cout << it << " ";
    }
    cout << "\n";
}

int main() {
    int n;
    cin >> n;

    printAllDivisor(n);
}