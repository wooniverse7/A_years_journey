#include<iostream>
#include<string>

using namespace std;

//스택 문제이지만 괄호의 순서 특성을 파악하면 스택을 쓰지않고 풀 수 있다.

//cnt가 음수가 됐을 그 상태는 ')'가 이미 하나 많은 상태기 때문에 끝내야 한다.
//메소드를 사용하지 않고 그냥 구현했을때는 바로 빠져나오지 못해 함수로 구현.
//그래서 음수가 바로 됐을 때는 NO를 출력하고 바로 끝냄
string PS(string s) {
	int cnt = 0;
	
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '(')
			cnt++;
		else
			cnt--;

		if (cnt < 0)
			return "NO";
	}

	if (cnt == 0)
		return "YES";
	else
		return "NO";
}

int main() {
	int T;
	cin >> T;

	while (T--) {
		string s;
		cin >> s;
		cout << PS(s) << '\n';
	}
	return 0;

}