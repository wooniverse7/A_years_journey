#include<iostream>
#include<cstdio>
#include<queue>
using namespace std;

int a[1000][1000];	//�丶��
int d[1000][1000];	//bfs - �Ÿ�����
int dx[] = { 0,0,1,-1 };
int dy[] = { 1,-1,0,0 };
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m;
	cin >> m >> n;
	queue<pair<int, int>> q;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
			d[i][j] = -1;	//�ʱ�ȭ
			if (a[i][j] == 1) {
				//�ټ��� ������
				q.push(make_pair(i, j));	//1�϶� ť ����
				d[i][j] = 0;	//ù��°��
			}
		}
	}
	//bfs : ť�� �􋚱��� ������ pop, �湮 ó��
	//O(n+m)
	//�������� �������� �ѹ� ȣ��
	while (!q.empty()) {
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		for (int k = 0; k < 4; k++) {
			int nx = x + dx[k];
			int ny = y + dy[k];
			//������ üũ 
			if (0 <= nx && nx < n && 0 <= ny && ny < m) {
				if (a[nx][ny] == 0 && d[nx][ny] == -1) {
					//������ǥ, ��0��X, ���� �湮 X
					d[nx][ny] = d[x][y] + 1;	//�Ϸ��߰�
					q.push(make_pair(nx, ny));
				}
			}
		}
	}
	int ans = 0;//���
	//O(mn)
	for (int i = 0; i < n; i++) {
		for (int j = 0; i < m; j++) {
			if (a[i][j] == 0 && d[i][j] == -1) {
				//����, ������������ ������ -1���
				//Ż�� ����
				cout << -1;
				return 0;
			}
			if(ans<d[i][j]){// '='���ŷ� �ߺ�����
				//�ش� �丶����� �ʹµ� �ɸ� �ð� + �ִ� ����
				ans = d[i][j];
			}
		}
	}
	cout << ans << '\n';

	return 0;
}
//O(mn)