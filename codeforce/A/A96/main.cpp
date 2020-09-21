#include <bits/stdc++.h>

using namespace std;
void evaluateDanger(string& input) {
	int danger1{0}, danger0{0};
	for (char x : input) {
		if (x == '0') {
			danger1 = 0;
			danger0 += 1;	
		}
		else {
		       danger0 = 0;
	       		danger1 += 1;		       
		}

		if (danger0 == 7 || danger1 == 7) {
			cout << "YES\n";
			return;
		}
	}
	cout << "NO\n";
}

int main() {
	string input;
	getline(cin, input);

	evaluateDanger(input);

	return 0;
}
