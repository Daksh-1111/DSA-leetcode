#include <iostream>
using namespace std;

// forward declaration
void pyramid(int n);

int main() {
    pyramid(5);
    return 0;
}

void pyramid(int n) {
    for (int i = 1; i <= n; i++) {
        cout << endl;
        for (int j = 0; j < i; j++) {
            cout << "* ";
        }
    }
    cout << endl;
}
