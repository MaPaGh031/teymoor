#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n, m, c = 0, c_2 = 0, pr_num;
	int num = 2, pow = 1;
	cout << "Enter n\n";
	cin >> n;
	vector<int> x = { 1 };

	for (int i = 2; i <= n; i++) {
		x.push_back(i);
	}

	while (n > num) {
		num *= 2;
		pow++;
	}

	x[1] = 0;

	for (int i = 1; i <= pow * n - 1; i++) {
		m = i % n;
		if (x[m] != 0) {
			if (c == 1){
				x[m] = 0;
				c = 0;
			}
			else {
				c++;
			}
		}
	}

	for (int j = 0; j <= n - 1; j++) {
		if (x[j] != 0) {
			c_2++;
			pr_num = x[j];
		}
	}

	if (c_2 == 1) {
		cout << pr_num;
	}
	else {
		c_2 = 0;
	}
}