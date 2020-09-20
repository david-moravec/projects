#include <bits/stdc++.h>

using namespace std;
void noOfMoves(int i) {
    int j = 0;
    int k = i % 5;
    if (k == 0) {
        k = 5;
        j = i/5;
    }
    else j = 1 + i / 5;
    int no_moves = fabs((k-3)) + fabs((j-3));

    cout << no_moves << endl;
}

int main() {

    int i = 0;
    int temp = 0;

    while(cin >> temp) {
        i++;
        if (temp == 1) break;
    }
    noOfMoves(i);

    return 0;
}
