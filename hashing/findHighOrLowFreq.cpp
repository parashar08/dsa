#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];

    for (int i=0; i<n; i++) cin >> arr[i];

    unordered_map<int, int> umpp;
    for (int i=0; i<n; i++) {
        umpp[arr[i]]++;
    }

    int maxF = 0, minF = n;
    int maxE = 0, minE = 0;
    for (auto it : umpp) {
        int element = it.first;
        int count = it.second;

        if (count > maxF) {
            maxE = element;
            maxF = count;
        }
        
        if (count < minF) {
            minE = element;
            minF = count;
        }
    }

   cout << "largest frequency element: " << maxE << "\n";
   cout << "smallest frequenct element: " << minE << "\n";
}