#include <iostream>
using namespace std;

int depozit(int x, int y, int z) {
    int cx = x, cy = y, cz = z;
    while (y) {
        int r = x % y;
        x = y;
        y = r;
    }
    x = cx * cy / x;
    cx = x;
    while (z) {
        int r = x % z;
        x = z;
        z = r;
    }
    return cx * cz / x;
}

int main() {
    cout << depozit(40, 20, 30);
}