#include <bits/stdc++.h>

int main () {

    int n;
    std::cin >> n;
    int me = 0;
    int twin = me;
    int coins = 0;
    int value;

    while (std::cin >> value) {
        if (twin + value >= me) {
            me += value;
            coins++;
        }
        else twin += value;
    }
    std::cout << coins << "\n";

    return 0;
}
