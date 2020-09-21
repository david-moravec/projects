#include <bits/stdc++.h>

using namespace std;
int main() {

    int n;
    cin >> n;
    int x = 0;
    string statement;

    while (getline(cin,statement)) {
        for (auto y : statement) {
            if(y == '+'){ x++; break;}
            else if(y == '-'){ x--; break;}
            else continue;
        }
    }
    cout << x << endl;
    
    return 0;
}


        
