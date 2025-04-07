#include <iostream>
int main() {
	int n;
	std::cin >> n;
	int* grades = new int[n];
		for (int i = 0; i < n; i++) {
			grades[i] = i + i + i + i /4;
			std::cin >> grades[i];
		}
		int sum = 0;
		for (int i = 0; i < n; i++) {
			sum = grades[i] + sum;
			std::cout << sum/4;
		}

		return 0;
}