#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char s[101], t[101] = "";
    int v[3], c = 0;
    cin >> v[0] >> v[1] >> v[2];
    cin.get();
    cin.getline(s, 101);
    for (char* cuv = strtok(s, " "); cuv; cuv = strtok(nullptr, " ")) {
        for (int i = 0; cuv[i]; i++) {
            cuv[i] = (cuv[i] - 'A' + v[c % 3]) % 26 + 'A';
            c++;
        }
        strcat(t, cuv);
    }
    strcpy(s, t);
    cout << s;
    return 0;
}