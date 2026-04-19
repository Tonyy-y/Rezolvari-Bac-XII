#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream fin("test.in");

    int n, left = 0, right = 0;
    long long m;
    fin >> n >> m;
    int* v = new int[n];
    for (int i = 0; i < n; i++) {
        fin >> v[i];
        if (v[i] > right) {
            right = v[i];
        }
    }
    while (left <= right) {
        int mid = left + (right - left) / 2;
        long long sum = 0;
        for (int i = 0; i < n; i++) {
            if (v[i] > mid) {
                sum += v[i] - mid;
            }
        }
        if (sum >= m) {
            left = mid + 1;
        } 
        else {
            right = mid - 1;
        }
    }
    cout << left - 1 << "\n";
 
    delete[] v;
    fin.close();
    return 0;
}