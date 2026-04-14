#include <iostream>
using namespace std;

void harsad(int k, int& n) {
    for (int i = k; i >= 1; i--) {
        int s = 0;
        k = i;
        while (k) {
            s += k % 10;
            k /= 10;
        }
        if (i % s == 0) {
            n = i;
            return;
        }
    }
}

int main() {
    int n;
    harsad(2027, n);
    cout << n;
    return 0;
}