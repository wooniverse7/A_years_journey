//컴파일 순서 이해
#include<iostream>

using namespace std;

bool c[10]; int a[10];

void go(int index, int n, int m) {
	if (index == m) {
		for (int i = 0; i < m; i++) {
			cout << a[i] << ' ';
		}
		cout << '\n';
	}

	for (int i = 1; i <= n; i++) {
		if (c[i]) continue;
		c[i] = true;
		a[index] = i;
		go(index+1, n, m);		//for문을 다 컨티뉴하면 go로 돌아오는 이유. index가 1씩 줄어드는 이유.
		c[i] = false;
	}
}

int main() {
	int n, m;
	cin >> n >> m;
	go(0, n, m);

	return 0;
}