#include<iostream>
#include<algorithm>
#include<cstdlib>
#include<functional>
using namespace std;

int main() {
	int A[3];
	for (int i = 0; i < 4; i++) {
		cin >> A[i];
	}

	sort(A, A+3, less<int>()); //�� 
	//less ��������, greater �������� OK

	int result = 0;
	result = (A[0] + A[3]) - (A[1] + A[2]);
	cout << abs(result) << "\n";	//��
	
	return 0;
}