#include <bits/stdc++.h>
#include <string>

int nmbOfBeautiful(const std::string& number) {
	int howMany = 0;
	int leading = 0;
	int isOneMore = 0;
	int intNmb = 0;

	std::vector<int> digits;

	int decimals = 0;
	for (const char& x : number) {
		digits.push_back(x - '0');

		if (decimals == 0) {
			leading = digits[decimals];
		}


		decimals++;
	}
	
	for (int i = 0; i < digits.size(); i++) {
		if (digits[i] == leading) {
			isOneMore = 1;
		}
		else if(digits[i] > leading) {
			isOneMore = 1;  
			goto HERE;
		}
		else if(digits[i] < leading) {
			isOneMore = 0;
			goto HERE;
		}
			
/*
		if(digits[i] < leading & !isOneMore) {
			isOneMore = 0;
			goto HERE;
		}

		else if(digits[i] == leading) {
			isOneMore = 1;
			if(i < digits.size() & digits[i+1] < leading) {
				isOneMore = 0;
				goto HERE;
			}
		}

		else {
			isOneMore = 1;
			goto HERE;
		}
*/
	}

	HERE:howMany = (decimals - 1) * 9 + (leading - 1) + isOneMore;


	return howMany;
}

int main() {

	int n;
	std::cin >> n;
	std::vector<std::string> numbers(n);

	for (int i = 0; i < n; i++) {
		std::string number;
		std::cin >> number;
		numbers[i] = number;
	}


	for (int i = 0; i < numbers.size(); i++) {
		std::cout << nmbOfBeautiful(numbers[i]) << std::endl;
	}

	return 0;
}
