#include <iostream>

using namespace std;

int main()
{
    int m[5][5], c;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> m[i][j];
            if (m[i][j] == 1)
            {
                c = (abs(i + 1 - 3) + abs(j + 1 - 3));
                cout << c;
                return 0;
            }   
        }
    }

    return 0;
}