#include <bits/stdc++.h>

using namespace std;
void maxSpeed(vector<int>& data, int k) {
	sort(data.begin(), data.end(), greater<int>());
	cout << data[k-1] << "\n";
}

int main() {
	int n, k;
	cin >> n >>k;
	vector<int> data_speed;
	int input;

	while(cin >> input) {
		data_speed.push_back(input);
	}

	maxSpeed(data_speed, k);
	return 0;
}	
		
