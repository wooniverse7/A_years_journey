//컴파일 순서 이해
//트리 구조(dfs)
#include<iostream>

using namespace std;

bool c[10]; int a[10];
void go(int index, int n, int m) {
	if (index == m) {	//탈출 조건
		for (int i = 0; i < m; i++) {
			cout << a[i] << ' ';
		}
		cout << '\n';
		return;	//탈출 : 자식에서 부모로(**)
	}

	for (int i = 1; i <= n; i++) {
		if (c[i]) continue;
		c[i] = true;
		a[index] = i;
		go(index+1, n, m);		//for문을 다 컨티뉴하면 go로 돌아오는 이유. index가 1씩 줄어드는 이유.
		//다 끝났을 때 go함수 다시 호출
		//0,1,1 -> 1,1,1 index가 1일 떄 끝나서 반환. 다시 재귀하면 0이 된다? 스택
		c[i] = false;
	}
}

int main() {
	int n, m;
	cin >> n >> m;
	go(0, n, m);

	return 0;
}