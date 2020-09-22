#include <bits/stdc++.h>

using namespace std;

int main() {
	double n, m, a;
	cin >> n >> m >> a;

	long long int b = ceil(n/a);
	long long int c = ceil(m/a);
	long long int tiles = b * c;

	cout << tiles << "\n";

	return 0;
}
