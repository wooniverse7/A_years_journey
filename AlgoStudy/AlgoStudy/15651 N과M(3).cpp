#include<iostream>
//순열 : 나열, 팩토리얼 nPr
//조합 : n개 뽑기, nCr
using namespace std;

bool c[10]; int a[10];
void go(int index, int n, int m) {
	if (index == m) {
		for (int i = 0; i < m; i++) {
			cout << a[i] << ' ';
		}
		cout << '\n';
		return;	//리턴 추가
	}

	//중복처리만 삭제
	for (int i = 1; i <= n; i++) {
		//if (c[i]) continue;
		//c[i] = true;
		a[index] = i;
		go(index + 1, n, m);
		//c[i] = false;
	}
}

int main() {
	int n, m;
	cin >> n >> m;
	go(0, n, m);

	return 0;
}