#include <bits/stdc++.h>
using namespace std;

int main() {
    int x;
    cin >> x;

    if (x < 0) {
        cout << "NO";
        return 0;
    }

    int original = x;
    long long rev = 0; 

    while (x > 0) {
        int d = x % 10;
        rev = rev * 10 + d;
        x /= 10;
    }

    if (rev == original)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
