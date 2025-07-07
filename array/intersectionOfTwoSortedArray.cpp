#include <iostream>
#include <vector>

using namespace std;

vector<int> findIntersectionOfSortedArray(vector<int> a, vector<int> b) {
    int n1 = a.size();
    int n2 = b.size();
    int i = 0;
    int j = 0;

    vector<int> intersection;

    while (i < n1 && j < n2) {
        if (a[i] < b[j]) {
            i++;
        } else if (b[j] < a[i]) {
            j++;
        } else {
            intersection.push_back(a[i]);
            i++;
            j++;
        }
    }
    
    return intersection;
}

int main() {
    int n1, n2;
    cin >> n1 >> n2;

    vector<int> a;
    vector<int> b;
    for (int i=0; i<n1; i++) {
        int x;
        cin >> x;
        a.push_back(x);
    }
    for (int i=0; i<n2; i++) {
        int x;
        cin >> x;
        b.push_back(x);
    }

    vector<int> ans = findIntersectionOfSortedArray(a, b);

    for (int x : ans) {
        cout << x << " ";
    }
    cout << "\n";
}