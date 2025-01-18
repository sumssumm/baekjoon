#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector<int> v(9);
	int sum = 0;
	for (int i = 0; i < 9; ++i) {
		cin >> v[i];
		sum += v[i];
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < 8; ++i) {
		for (int j = i + 1; j < 9; ++j) {
			if (sum - v[i] - v[j] == 100) {
				for (auto &a : v) {
					if (a != v[i] && a != v[j])
						cout << a << "\n";
				}
				return 0;
			}
		}
	}
}