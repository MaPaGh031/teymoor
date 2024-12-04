#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <Windows.h>
using namespace std;


int main(){
	int x[5];
	int y[5];
	string s[6] = { "\t", "  [  ", "\t   ", "\t", "  ]  ", "\t" };
	string s_2[6] = { "\t", "  [  ", "\t   ", "\t", "  ]  ", "\t" };
	int z[3];
	int sum;

	cout << "Enter x1-x5\n";

	for (int i = 0; i <= 4; i++) {
		cin >> x[i];
	}

	cout << "\nEnter y1-y5\n";

	for (int i = 0; i <= 4; i++) {
		cin >> y[i];
	}


	while (true) {
		system("cls");
		cout << "Use WSAD to move\nF to confirm\n\n";

		for (int i = 0; i <= 4; i++) {
			cout << s[i] << x[i];
		}
		cout << s[5] + "\n\n";

		for (int i = 0; i <= 4; i++) {
			cout << s_2[i] << y[i];
		}
		cout << s_2[5];

		char move = _getch();
		string m;

		if (move == 'a') {
			if (s[0] == "  [  ") {
			}
			else {
				for (int i = 0; i <= 4; i++) {
					m = s[i];
					s[i] = s[i + 1];
					s[i + 1] = m;
				}
			}

		}


		if (move == 'd') {
			if (s[5] == "  ]  ") {
			}
			else {
				for (int i = 5; i >= 1; i--) {
					m = s[i];
					s[i] = s[i - 1];
					s[i - 1] = m;
				}
			}

		}

		if (move == 'w') {
			if (s_2[0] == "  [  ") {
			}
			else {
				for (int i = 0; i <= 4; i++) {
					m = s_2[i];
					s_2[i] = s_2[i + 1];
					s_2[i + 1] = m;
				}
			}

		}


		if (move == 's') {
			if (s_2[5] == "  ]  ") {
			}
			else {
				for (int i = 5; i >= 1; i--) {
					m = s_2[i];
					s_2[i] = s_2[i - 1];
					s_2[i - 1] = m;
				}
			}

		}

		if (move == 'f'){
			break;
		}

		Sleep(100);
	}

	for (int i = 0; i <= 5; i++) {
		if (s[i] == "  [  ") {
			z[0] = x[i];
			z[1] = x[i + 1];
			z[2] = x[i + 2];
		}
	}

	for (int i = 0; i <= 5; i++) {
		if (s_2[i] == "  [  ") {
			z[0] += y[i];
			z[1] += y[i + 1];
			z[2] += y[i + 2];
		}
	}
	
	sum = (z[0] % 10) + (z[1] % 10) + (z[2] % 10);

	if (sum % 6 == 0) {
		cout << "\nBoro Jolo :)";
	}
	else {
		cout << "\nGir Oftadi :(";
	}
}

