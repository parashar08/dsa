// takes 0(1) for store and fetch (worst case - 0(n) and best, average - 0(1)) - n means number of elements in map data structure
// stored in un-orderd form (not sorted)

#include <unordered_map>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    unordered_map<int, int> umpp;

    for (int i=0; i<n; i++) {
        cin >> arr[i];
        umpp[arr[i]]++;
    }

    int q;
    cin >> q;
    while (q--) {
        int number;
        cin >> number;

        cout << umpp[number] << "\n";
    }
    cout << "\n";
}