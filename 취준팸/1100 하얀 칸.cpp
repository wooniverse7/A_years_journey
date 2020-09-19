#include<iostream>

using namespace std;

char Chess[9][9];
int cnt = 0;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			cin >> Chess[i][j];
		}
		//cout << '\n';
	}
	
	// 2i < 8; i++는 안되고 i < 8; i+=2는 되는 이유
	//Chess[i][j]에 입력되는 값이 다르기 때문...
	for (int i = 0; i < 8; i+=2) {
		for (int j = 0; j < 8; j+=2) {
			if (Chess[i][j] == 'F')
				cnt++;
		}
	}
	for (int i = 1;i < 8; i+=2) {
		for (int j = 1; j < 8; j+=2) {
			if (Chess[i][j] == 'F')
				cnt++;
		}
	}

	cout << cnt << '\n';
	return 0;
}