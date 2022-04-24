#include <bits/stdc++.h>

<<<<<<< HEAD
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
    

=======
>>>>>>> cd2132f... update
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
        



<<<<<<< HEAD
>>>>>>> ee2df1d... preskupeni filu
=======
        
>>>>>>> cd2132f... update
