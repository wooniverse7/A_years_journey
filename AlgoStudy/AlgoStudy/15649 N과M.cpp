//������ ���� ����
//Ʈ�� ����(dfs)
#include<iostream>

using namespace std;

bool c[10]; int a[10];
void go(int index, int n, int m) {
	if (index == m) {	//Ż�� ����
		for (int i = 0; i < m; i++) {
			cout << a[i] << ' ';
		}
		cout << '\n';
		return;	//Ż�� : �ڽĿ��� �θ��(**)
	}

	for (int i = 1; i <= n; i++) {
		if (c[i]) continue;
		c[i] = true;
		a[index] = i;
		go(index+1, n, m);		//for���� �� ��Ƽ���ϸ� go�� ���ƿ��� ����. index�� 1�� �پ��� ����.
		//�� ������ �� go�Լ� �ٽ� ȣ��
		//0,1,1 -> 1,1,1 index�� 1�� �� ������ ��ȯ. �ٽ� ����ϸ� 0�� �ȴ�? ����
		c[i] = false;
	}
}

int main() {
	int n, m;
	cin >> n >> m;
	go(0, n, m);

	return 0;
}