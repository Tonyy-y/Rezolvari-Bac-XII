#include <iostream>
using namespace std;

void Plus(int &n) {
    int x = 0, a = 1;
    while(n) {
        int cf = n % 10;
        n /= 10;
        if(cf == 5 && n % 10 == 2)
            cf = 6;
        x = cf * a + x;
        a *= 10;
    }
    n = x;
}

int main() {
    int n = 202535250;
    Plus(n);
    cout << n;

    return 0;
}