#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("bijuterii.in");

int main() {
    int nc, np, x, freq[100] = {0};
    fin >> nc >> np;
    for (int i = 0; i < nc; i++) {
        fin >> x;
        if (x > 99) {
            x /= 10;
        }
        freq[x]++;
    }
    for (int i = 0; i < np; i++) {
        fin >> x;
        if (x > 99) {
            x /= 10;
        }
        if (freq[x] || freq[x % 10 * 10 + x / 10]) {
            cout << "DA\n";
            fin.close();
            return 0;
        }
    }
    cout << "NU\n";
    fin.close();
    return 0;
}