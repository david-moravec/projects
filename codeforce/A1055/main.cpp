#include <bits/stdc++.h>
using namespace std;

bool enoughForward(int s, vector<int>& forward) {
    //for (int i=s; i > sizeof(forward) / sizeof(char); i++) {
    //    if ((int)forward[i]) { return true;}
     //   }
    return false;
    }   

bool isPossible(int s, vector<int>& forward, vector<int>& back) {
    if (not (int)forward[0]) {
        return false;
        }
    if (not (int)forward[s] && not (int)back[s]) { 
        return  false;
        }
    if (not enoughForward(s, forward)) {
        return  false;
        }
    return true;
    }


int main() {
    int n, s;
    std::cin >> n >> s;
    string _forward;
    string _back;
    vector<int> forward;
    vector<int> back;

    getline(cin, _forward, ' ');
    getline(cin, _back, ' ');
    
    for (auto x:_forward) {
        cout << x << endl;
        cout << (int)x << endl;
        }

    for (auto x:_forward) forward.push_back((int)x);
    for (auto x:_back) back.push_back((int)x);

    for (auto x : forward) cout << x << endl;
    

    if (isPossible(s, forward, back)) {
        cout << "YES" << endl;
        }
    else {
        cout << "NO" << endl;
        }

    return 0;
}
    
