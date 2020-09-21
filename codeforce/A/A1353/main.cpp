#include <iostream>

int maxSum(int input[2]) {
    if (input[0] > 2) {
        return input[1] * 2;
    }
    if (input[0] == 1) {
        return 0;
    }
    if (input[0] == 2 ) {
        return input[1];
    }
    return 0;
}

int main() {
    int t;
    int input[2];
    std::cin >> t;
    for (int i=0; i < t; i++) {
        std::cin >> input[0] >> input[1];
        std::cout << maxSum(input) << std::endl;
    }
    return 0;
}
       
