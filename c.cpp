#include <iostream>

using namespace std;

int main() {
    int n, c = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int p, v, t;
        cin >> p >> v >> t;
        if ((p + v + t) > 1) c++;
    }
    cout << c;
}