#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("bac.txt");

int main() {
    int x, y, a, b = -1, c = 0;
    fin >> x >> y;
    while (fin >> a && a <= y) {
        if (a % 2 == 0 && x <= a && a <= y && a != b) {
            c++;
        }
        b = a;
    }
    cout << c;
    
    fin.close();
    return 0;
}