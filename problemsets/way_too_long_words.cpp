#include <iostream>
#include <string>

using namespace std;

int main() {
    int x;
    cin >> x;
    for (int i = 0; i < x; i++) {
        string k;
        cin >> k;
        int c = 0;

        cout << (k.length() > 10 ? k[0] + to_string(k.length() - 2) + k[k.length() -1] : k) << "\n";
    }

    return 0;
}