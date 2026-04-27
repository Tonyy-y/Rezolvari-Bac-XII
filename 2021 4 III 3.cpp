#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream fin1("bac1.txt");
    ifstream fin2("bac2.txt");

    int n1, n2, x1, x2;
    fin1 >> n1 >> x1;
    fin2 >> n2 >> x2;

    bool ok = false;
    int i = 1, j = 1;
    while (i <= n1 && j <= n2) {
        if (x1 < x2) {
            if (x1 % 5 == 0) cout << x1 << " ", ok = true;
            fin1 >> x1;
            i++;
        }
        else if (x1 > x2) {
            if (x2 % 5 == 0) cout << x2 << " ", ok = true;
            fin2 >> x2;
            j++;
        }
        else {
            fin1 >> x1;
            fin2 >> x2;
            i++;
            j++;
        }
    }
    while (i <= n1) {
        if (x1 % 5 == 0) cout << x1 << " ", ok = true;
        fin1 >> x1;
        i++;
    } 
    while (j <= n2) {
        if (x2 % 5 == 0) cout << x2 << " ", ok = true;
        fin2 >> x2;
        j++;
    }
    if (!ok) cout << "nu exista";

    fin1.close();
    fin2.close();
    return 0;
}