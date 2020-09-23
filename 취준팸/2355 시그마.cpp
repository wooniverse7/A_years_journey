#include<iostream>

using namespace std;

int main() {
	long long int A, B;
	long long int sum = 0;

	cin >> A >> B;
	if (A >= B)
		sum = A * (A + 1) / 2 - B * (B - 1) / 2;
	else
		sum = B * (B + 1) / 2 - A * (A - 1) / 2;

	cout << sum << '\n';
	return 0;
}