#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream fout("bac.out");

    int x, y, n;
    cin >> x >> y;
    fout << y << " " << x << " ";
    n = (y - x) / 2;
    while (n > 1) {
        n--;
        y = x;
        x = y - 2 * n;
        fout << x << " ";
    }

    fout.close();
    return 0;
}