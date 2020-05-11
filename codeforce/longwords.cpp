#include <iostream>
#include <vector>
int main() {
	int n;
	std::vector<std::string> words;
	std::cin >> n;

	for (int i = 0; i < n; i++) {
		std::string w;
		std::cin >> w;
		words.push_back(w);
	}

	for (int i = 0; i < n; i++){
		if (words[i].length() > 10) {
			int tmp_nmb = words[i].length() - 2;
			std::cout << words[i][0] << tmp_nmb << words[i][tmp_nmb + 1] << std::endl;
		}
		else {
			std::cout << words[i] << std::endl;
		}
	}
	return 0;
}
		
