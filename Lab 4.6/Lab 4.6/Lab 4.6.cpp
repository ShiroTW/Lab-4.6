#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double P;
    int n, k;
    P = 1.0;
    k = 1;
    while (k <= 20) {
        n = 1;
        while (n <= 25 - k) {
            P += (double)(k - n) / (k + n + 1);
            n++;
        }
        k++;
    }
    cout << P << endl;

    P = 1.0;
    k = 1;
    do {
        n = 1;
        do {
            P += (double)(k - n) / (k + n + 1);
            n++;
        } while (n <= 25 - k);
        k++;
    } while (k <= 20);
    cout << P << endl;

    P = 1.0;
    for (k = 1; k <= 20; k++) {
        for (n = 1; n <= 25 - k; n++) {
            P += (double)(k - n) / (k + n + 1);
        }
    }
    cout << P << endl;

    P = 1.0;
    for (k = 20; k >= 1; k--) {
        for (n = 25 - k; n >= 1; n--) {
            P += (double)(k - n) / (k + n + 1);
        }
    }
    cout << P << endl;

    return 0;
}