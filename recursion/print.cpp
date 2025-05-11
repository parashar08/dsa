#include <iostream>
using namespace std;

int count = 0;
void print() {
    cout << count << "\n";
    if (count == 3) return;
    count++;
    print();
}

int main() {
    print();
}