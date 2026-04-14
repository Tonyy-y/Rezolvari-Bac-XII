#include <iostream>
#include <cstring>
using namespace std;

int nrVocale(char s[]) {
    int c = 0;
    for (int i = 0; s[i]; i++) {
        if (strchr("aeiou", s[i])) {
            c++;
        }
    }
    return c;
}

int main() {
    int n;
    cin >> n;
    cin.get();
    char s[n][21];
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }
    int nr = nrVocale(s[n - 1]);
    for (int i = 0; i < n - 1; i++) {
        if (strcmp(s[i], s[n - 1]) != 0 && nrVocale(s[i]) == nr) {
            cout << s[i] << " ";
        }
    }

    return 0;
}