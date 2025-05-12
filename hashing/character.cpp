#include <iostream>
using namespace std;

/*
    'a' - 'a' = 0
    'b' - 'a' = 1
    'c' - 'a' = 2

    you create hash array and loop through the actual string and ch - 'a' will give you index 0 to 25
    and you have map 0 to a and 25 to z.
*/

int main() {
    string str;
    cin >> str;

    int q;
    cin >> q;

    // precompute
    // FOR LOWECASE LETTERS
    // int hash[25] = {0};

    // for (int i=0; i<str.size(); i++) {
    //     hash[str[i] - 'a']++;
    // }

    // FOR UPPER CASE LETTER

    int hash[256] = {0};
    for (int i=0; i<str.size(); i++) {
        hash[str[i]]++;
    }

    while (q--) {
        char ch;
        cin >> ch;

        // fetch
        // cout << hash[ch - 'a'] << "\n";
        cout << hash[ch] << "\n";
    }
    cout << "\n";
}