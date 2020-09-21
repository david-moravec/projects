#include <bits/stdc++.h>

<<<<<<< HEAD
using namespace std;
int main() {

    int n, k;
    cin >> n >> k;
    int i = 0;

    bool increase_i = false;
    int score = 0;
    int kth_score = 0;
    
    while(cin >> score) {
        if (i > n) break;
        else if (score == 0) break;
        else if (i > k and kth_score == score) i++;
        else if (i > k and kth_score != score) i--;
        else if (i == k) {
            kth_score = score;
            i++;
        }
        else if (i < k) i++; 
        else break;
    }

    cout << i << "\n";

    return 0;
}
        



        
=======
    

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

>>>>>>> ee2df1d... preskupeni filu
