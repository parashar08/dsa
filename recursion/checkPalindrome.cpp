#include <iostream>
using namespace std;

bool checkPalindrome(int i, string str) {

    if (i >= str.size()/2) return true;

    if (str[i] != str[str.size()-i-1]) return false;
    
    return checkPalindrome(i+1, str);
}

int main() {
    string str;
    cin >> str;

    cout << checkPalindrome(0, str) << "\n";
}