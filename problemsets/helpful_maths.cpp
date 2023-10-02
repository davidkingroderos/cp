#include <iostream>

int main()
{
    std::string input;

    std::cin >> input;

    const char* numbers = input.data();

    for (int i = 0; i < input.length(); i++)
    {
        if (numbers[i] == '+') {
            continue;
        }

        int currentMinimum = numbers[i] - '0';

        for (int j = i; j < input.length(); j++) {
            if (numbers[j] == '+') {
                continue;
            }

            int item = numbers[j] - '0';

            if (item < currentMinimum) {

            }
        }
    }

    return 0;
}