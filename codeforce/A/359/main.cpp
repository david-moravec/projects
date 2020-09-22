#include <bits/stdc++.h>

using namespace std;
struct location {
	int i;
	int j;
};

void noOperations(const vector<int>& tiles, const int& n, const int& m) {
	location t;
	for (int id : tiles) {
		t.i = id / m; 
		t.j = id % m;
		//cout << id << "\n";
		//cout << n << t.j << "\n";
		if (t.i == 0 || t.i == (n - 1) || t.j == 0 || t.j == (m - 1)) {
			cout << 2 << "\n";
			return;
		}
	}
	cout << 4 << "\n";
}

int main() {
	int n, m, good;
	int id{0};
	vector<int> tiles;
	cin >> n >> m;
	while(cin >> good) {
		if (good == 1) tiles.push_back(id);
		id ++;
	}
	noOperations(tiles, n, m);
	return 0;
}
