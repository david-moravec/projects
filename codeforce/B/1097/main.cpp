#include <bits/stdc++.h>

using namespace std;
void isPossible(const vector<int>& r, int n) {
	for (int mask = 0; mask < (1 << n); mask++) {
		int sum = 0;
		for (int i = 0; i < n; i++) {
			if (mask & (1 << i)) sum += r[i];
			else sum -= r[i];
		}
		if (sum % 360 == 0) {
			cout << "YES\n";
			return;
		}
	}
	cout << "NO\n";
}

int main() {
	int n;
	cin >> n;
	vector<int> r;

	int rot;
	while(cin >> rot) r.push_back(rot);

	isPossible(r, n);
	return 0;
}
