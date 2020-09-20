#include <iostream>
#include <string>
#include <cmath>
#include <math.h>

std::string isPossible(const long long int& dots) {
	int rem = dots % 14;
	
	if(rem <= 6 && dots > 14 && rem > 0) {
		return "YES";
	}
	else { 
		return "NO";
	}
}

int main() {
	int n;
	std::cin >> n;
	
	int i = 0;
	do {
		long long int dots = 0;
		std::cin >> dots;
		std::cout << isPossible(dots) << std::endl;
		i++;
	} while(i < n);

	return 0;
}

