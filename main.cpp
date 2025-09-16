#include <iostream>
#include "include/function.h"


int main() {
    int n, m;
    std::cin >> n >> m;
    int result = answer(n, m);
    std::cout << result << '\n';
    return 0;
}