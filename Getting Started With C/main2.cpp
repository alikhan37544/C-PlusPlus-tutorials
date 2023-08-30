#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    double sum = 0.0;
    for (int i = 1; i <= n; i++) {
        double term = 1.0;
        for (int j = 1; j <= i; j++) {
            term *= (double)i / j;
        }
        sum += term;
    }
    cout << sum << endl;
    return 0;
}
