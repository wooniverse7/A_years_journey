#include<iostream>
#include<algorithm>
using namespace std;

bool c[10]; int a[10]; int k[10];
void go(int index, int n, int m) {
	if (index == m) {
		for (int i = 0; i < m; i++) {
			cout << k[a[i]] << ' ';		//a�迭�� 1~n���� �����̴ϱ� �׿� ���缭 ���
		}
		cout << '\n';
		return;
	}

	for (int i = 0; i < n; i++) {
		if (c[i]) continue;
		c[i] = true;
		a[index] = i;
		go(index + 1, n, m);
		c[i] = false;
	}
}


int main() {
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> k[i];
	}
	sort(k, k + n);
	go(0, n, m);

	return 0;
}