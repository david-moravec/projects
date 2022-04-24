#include <bits/stdc++.h>

int main() {
    char k;
    bool first_letter = true;

    while (std::cin >> k) {
        if (first_letter) {
            std::cout << (char)toupper(k);
            first_letter = false;
        }
        else std::cout << k;
    }

    return 0;
}
