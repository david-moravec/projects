#include <bits/stdc++.h>

using namespace std;
void sortInput(string s, vector<int>& v) {
    for (char& x: s) {
        if (x == '+') continue;
        else v.push_back(x - '0');
    }

    sort(v.begin(), v.end());
}
        
int main() {
    string s;
    getline(cin, s);
    vector<int> sorted;
    sortInput(s, sorted);
    for (int& x : sorted) {
        //cout << &x << endl;

        //cout << &x << "  " << (int*)&(*sorted.end()) << endl;
        if (&x == (int*)&(*sorted.end()) - 1) cout << x << endl;
        else cout << x << "+";
    }
    return 0;

}
