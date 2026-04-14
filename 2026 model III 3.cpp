#include <iostream>
#include <fstream>
using namespace std;

ofstream fout("bac.txt");

int main() {
    int n, p = 0;
    cin >> n;
    for(int i = 2; i <= n; i++) {
        int x = i;
        while(x % 13 == 0) {
            p++;
            x /= 13;
        }
    }
    fout << p;

    fout.close();
    return 0;
}