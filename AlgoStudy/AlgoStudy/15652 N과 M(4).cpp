//�ߺ����� ����
#include<iostream>
//������ �湮üũ no�ʿ�
//������ �ߺ����
using namespace std;

bool c[10]; int a[10];
//���� ������ ū ���� �������� start���� �߰�
void go(int index, int start, int n, int m) {
	if (index == m) {
		for (int i = 0; i < m; i++) {
			cout << a[i] << ' ';
		}
		cout << '\n';
		return;	//���� �ʿ��Ҷ��� ������
	}

	//���� ����� ���ۼ��� start�� ����
	for (int i = start; i <= n; i++) {
		//if (c[i]) continue;
		//c[i] = true;		//��������
		a[index] = i;
		go(index + 1, i, n, m);
		//c[i] = false;		//��������
	}
}

int main() {
	int n, m;
	cin >> n >> m;
	go(0, 1, n, m);

	return 0;
}