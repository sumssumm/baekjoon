// #include <iostream>
// using namespace std;

// int main() {
// 	int n;
// 	cin >> n;
// 	for (int i = 0; i < n; ++i) {
// 		for (int j = 0; j < n + i; ++j) {
// 			if (j < n - i - 1)
// 				cout << " ";
// 			else 
// 				cout << "*";
// 		}
// 		cout << " \n";
// 	}
// }

#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n * 2; ++j) {
			if (j < n - i -1)
				cout << " ";
			else if (j < n + i)
				cout << "*";
		}
		cout << " \n";
	}
}