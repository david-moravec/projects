#include <bits/stdc++.h>

int nOfDom(int m, int n) {
    int squares = m*n;
    return floor(squares/2);
}

int main() {
    int m, n;

    std::cin >> m >> n;
    std::cout << nOfDom(m,n) << "\n";
    
    return 0;
}


