#include <iostream>
#include <math.h>

int main() {
    double n, m, a;
    
    std::cin >> n >> m >> a;     
    long long ma = ceil(m/a);
    long long na = ceil(n/a);

    std::cout << ma * na;

    return 0;
}