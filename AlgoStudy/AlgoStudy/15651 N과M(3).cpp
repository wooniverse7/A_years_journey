#include<iostream>

using namespace std;

bool c[10]; int a[10];
void go(int index, int n, int m) {
	if (index == m) {
		for (int i = 0; i < m; i++) {
			cout << a[i];
		}
		cout << '\n';
	}

	
	for (int i = 1; i <= n; i++) {
		if (c[i]) continue;
		c[i] = true;
		a[index] = i;
		//for문을 다 컨티뉴하면 go로 돌아오는 이유. index가 1씩 줄어드는 이유.
		go(index + 1, n, m);
		//아마 go밑으로 돌아오는듯
		c[i] = false;
	}
}

int main() {
	int n, m;
	cin >> n >> m;
	//for문을 다 통과하면 여기로 오는거? 다시 index0으로 재귀
	go(0, n, m);

	return 0;
}