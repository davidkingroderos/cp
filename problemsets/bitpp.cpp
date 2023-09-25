#include <iostream>

using namespace std;

int main()
{
    int n, c = 0;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string k;
        cin >> k;
        if (k[1] == '+')
            c++;
        else if (k[1] == '-')
            c--;
    }

    cout << c;

    return 0;
}