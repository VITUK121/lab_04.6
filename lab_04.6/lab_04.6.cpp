#include <iostream>
using namespace std;

int main()
{
	double S = 0, P = 1;
	int i = 2, k = 1;
	while (i <= 10) {
		S = 0;
		while (k <= 20 - i) {
			S += static_cast<double>(i) / k;
			k++;
		}
		i++;
		k = 1;
		P *= (1 + S) / (1 + S * S);
	}
	cout << P << endl;
	///////////////////////////////////
	i = 2;
	k = 1;
	P = 1;
	do {
		S = 0;
		do{
			S += static_cast<double>(i) / k;
			k++;
		} while (k <= 20 - i);

		i++;
		k = 1;
		P *= (1 + S) / (1 + S * S);
	} while (i <= 10);
	cout << P << endl;
	///////////////////////////////////
	S = 0;
	P = 1;
	for (int i = 2; i <= 10; i++) {
		S = 0;
		for (int k = 1; k <= 20 - i; k++) {
			S += static_cast<double>(i) / k;
		}
		P *= (1 + S) / (1 + S * S);
	}
	cout << P << endl;
	///////////////////////////////////
	P = 1;
	for (int i = 10; i >= 2; i--) {
		S = 0;
		for (int k = 20 - i; k >= 1; k--) {
			S += static_cast<double>(i) / k;
		}
		P *= (1 + S) / (1 + S * S);
	}
	cout << P << endl;
}