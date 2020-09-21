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

	sort(A, A+3, less<int>()); //굿 
	//less 오름차순, greater 내림차순 OK

	int result = 0;
	result = (A[0] + A[3]) - (A[1] + A[2]);
	cout << abs(result) << "\n";	//살
	
	return 0;
}