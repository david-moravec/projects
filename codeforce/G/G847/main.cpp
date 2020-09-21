#include <bits/stdc++.h>

using namespace std;
/*
vector<int> sum(vector<vector<int>>& V, vector<int> v) {
	static int counter{0};
	while (counter < V.size()) {
			v = v + V[counter];
			counter++;
			sum(V, v);
	return v;
}

inline vector<int> operator+(const vector<int>& v1, const vector<int>& v2) {
	vector<int> v(v1.size());
	for (int i = 0; i < v1.size(); i++) v[i] = v1[i] + v2[i];
	return v;
}
*/

int main() {
	int n;
	vector<vector<int>> V;
	cin >> n;
	for (int i = 0; i < n; i++) {
		vector<int> v(7);
		for (int j = 0; j < 7; j++) {
			cin >> v[j]; 
		V.push_back(v);
		}
	}

	vector<int> v(7, 0);
	
	//v = sum(V);
	for (auto x : v) {
			cout << x << "\n";
	}

	for (auto x : V) {
			for (auto y : x) cout << y << "\n";
	}

	return 0;
}
	
	
