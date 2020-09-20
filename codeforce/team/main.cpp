#include <iostream>
#include <string>
#include <cmath>

bool moreThanTwo(int (&y)[3]) {
	int tmp = 0;
	for (int x : y) {
		if (x == 1) {
			tmp++;
		}
	}
    if (tmp > 1) {return 1;}
    else {return 0;};
}

int main() {
	int n;	
	int y[3];	
	int isSure = 0;
	std::cin >> n;

	for (int i = 0; i < n; i++) {
		std::cin >> y[0] >> y[1] >> y[2];
		isSure += moreThanTwo(y);
	}

	std::cout << isSure << std::endl;
	return 0;
}
		
