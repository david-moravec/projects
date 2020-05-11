#include <iostream>
#include <string>
#include <cmath>

int sToInt(std::string str) {
	int a = 0;
	float tmp = 0;
	for (auto x : str) {
		if (x == ' ') {
			tmp  += x - '0';
		}
	}
		
	a += round(tmp);
	
	return a;
}

int main() {
	int n = 0;	
	int isSure = 0;
	std::string rawInput;

	std::cin >> n;
	for (int i = 0; i < n; i++) {
		float tmp  = 0;
		std::cin >> rawInput;

		isSure += sToInt(rawInput);
	}

	std::cout << isSure << std::endl;
	return 0;
}
		
