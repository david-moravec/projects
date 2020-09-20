#include <iostream>
#include <vector>

void isStackable(const std::vector<int>& diff) {
		for (const int& dif : diff) {
			if(dif <= 0)   {
				return; 
			}
		}

		std::cout << "NO" << std::endl;
		exit(0);
		}

void tidyVector(std::vector<int>& v) {
	for (int j = 0; j < 2; j++) {
		v[j] = v[2];
		v.erase(v.begin() + 2);
	}
}

int main() {
	int n;
	std::cin >> n;
	std::vector<int> sides;
	int limit;

	for (int i = 0; i < n; i++) {
		int j = 0;
		do {
			int side = 0;
			std::cin >> side;
			sides.push_back(side);
			j++;
		} while(j < 2);

		if (i >= 1) {
			std::vector<int> diff;
			for (int i = 0; i < 2; i++) {
				diff.push_back(sides[2] - sides[i]);
				diff.push_back(sides[3] - sides[i]);
			}

			isStackable(diff); 
			max = max(sides[0], sides[1]);
			tidyVector(sides);
		
		}
	}

	std::cout << "YES" << std::endl;

	return 0;
}

				
					
				

