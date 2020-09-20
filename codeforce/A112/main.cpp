#include <bits/stdc++.h>

using namespace std;
int evaluateString(string& str1, string& str2) {
    int value = 0;

    for_each(str1.begin(), str1.end(), [](char& c){
        c = toupper(c);
    });

    for_each(str2.begin(), str2.end(), [](char& c){
        c = toupper(c);
    });

    value = strcmp(str1.c_str(), str2.c_str());

    return value;
}
    
void compare(string& input1, string& input2) {
    int value;
    
    value = evaluateString(input1, input2);

    if (value < 0) cout << -1 << "\n";
    else if (value == 0) cout << value << "\n";
    else cout << 1 << "\n";

    //int value1{0}, value2{0};
    //if(value1 > value2) cout << 1 << "\n";
    //else if(value1 == value2) cout << 0 << "\n";
    //else cout << -1 << "\n";
}

    
    

int main () {

    string input1, input2;

    getline(cin, input1);
    getline(cin, input2);

    compare(input1, input2);
    
    return 0;
}
