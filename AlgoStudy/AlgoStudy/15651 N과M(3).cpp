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
		//for���� �� ��Ƽ���ϸ� go�� ���ƿ��� ����. index�� 1�� �پ��� ����.
		go(index + 1, n, m);
		//�Ƹ� go������ ���ƿ��µ�
		c[i] = false;
	}
}

int main() {
	int n, m;
	cin >> n >> m;
	//for���� �� ����ϸ� ����� ���°�? �ٽ� index0���� ���
	go(0, n, m);

	return 0;
}