//중복조합 문제
#include<iostream>
//조합은 방문체크 no필요
//조합은 중복허용
using namespace std;

bool c[10]; int a[10];
//앞의 수보다 큰 수를 쓰기위해 start변수 추가
void go(int index, int start, int n, int m) {
	if (index == m) {
		for (int i = 0; i < m; i++) {
			cout << a[i] << ' ';
		}
		cout << '\n';
		return;	//리턴 필요할때와 없을때
	}

	//순열 만들기 시작수를 start로 지정
	for (int i = start; i <= n; i++) {
		//if (c[i]) continue;
		//c[i] = true;		//지워도됨
		a[index] = i;
		go(index + 1, i, n, m);
		//c[i] = false;		//지워도됨
	}
}

int main() {
	int n, m;
	cin >> n >> m;
	go(0, 1, n, m);

	return 0;
}