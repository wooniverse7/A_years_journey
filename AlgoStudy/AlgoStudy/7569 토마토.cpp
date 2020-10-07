#include<iostream>
#include<cstdio>
#include<queue>
using namespace std;

int a[1000][1000];	//토마토
int d[1000][1000];	//bfs - 거리저장
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
			d[i][j] = -1;	//초기화
			if (a[i][j] == 1) {
				//다수의 시작점
				q.push(make_pair(i, j));	//1일때 큐 삽입
				d[i][j] = 0;	//첫번째값
			}
		}
	}
	//bfs : 큐가 빌떄까지 현재점 pop, 방문 처리
	//O(n+m)
	//시작점은 여러개나 한번 호출
	while (!q.empty()) {
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		for (int k = 0; k < 4; k++) {
			int nx = x + dx[k];
			int ny = y + dy[k];
			//범위내 체크 
			if (0 <= nx && nx < n && 0 <= ny && ny < m) {
				if (a[nx][ny] == 0 && d[nx][ny] == -1) {
					//다음좌표, 토0익X, 아직 방문 X
					d[nx][ny] = d[x][y] + 1;	//하루추가
					q.push(make_pair(nx, ny));
				}
			}
		}
	}
	int ans = 0;//출력
	//O(mn)
	for (int i = 0; i < n; i++) {
		for (int j = 0; i < m; j++) {
			if (a[i][j] == 0 && d[i][j] == -1) {
				//서순, 익지않은것이 있으면 -1출력
				//탈출 조건
				cout << -1;
				return 0;
			}
			if(ans<d[i][j]){// '='제거로 중복제거
				//해당 토마토까지 익는데 걸린 시간 + 최댓값 갱신
				ans = d[i][j];
			}
		}
	}
	cout << ans << '\n';

	return 0;
}
//O(mn)