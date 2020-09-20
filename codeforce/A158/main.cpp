#include <bits/stdc++.h>

    

using namespace std;
int main() {

    static int n, k;
    cin >> n >> k;
    int score ,i, j;
    score = 0;
    i = 0;
    j = 0;
    int correction = 0;

    int temp;
    bool first_zero = false;
    while(cin >> temp) {
        if (temp == 0 && i == 0) first_zero = true;
        j++;
        i++;

        if (temp == 0 && first_zero) {
            cout << 0 << endl;
            return 0;
            }

        else if(temp == 0 && !first_zero) {
            if (n == 2) {  
                cout << j-1 << endl;
                return 0;
                }
            else {
                cout << j<< endl;
                return 0;
                }
            }

        else if (i==n && temp == score) {
            cout << j+1 << endl;
            return 0;
            }
        else if (i==n && temp != score) {
            cout << j << endl;
            return 0;
            }

        else if (i == k) {
            score = temp;  
            j--;
            }

        else if (score) {
            if (temp == score && i < n) continue;
            
            else {
                cout << j << endl;
                return 0;

            }
        }
    }
    return 0;
}

