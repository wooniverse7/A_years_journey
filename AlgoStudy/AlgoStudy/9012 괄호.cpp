//스택 성질 이용해서 풀기
#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int T;
	cin >> T;
	cin.ignore();
	while (T--) {
		string str;
		getline(cin, str);
		
		stack<char> s;
		//배열없이 범위기반 반복문 사용
		for (char ch : str) {
			if (ch == '(') {
				s.push(ch);
			}
			else
				if (s.empty()) {
					s.push(ch);
					continue;	//ctn로 다른 경우 무시
				}
				else if (s.top() == '(') {
					s.pop();
				}
				else if (s.top() == ')') {
					s.push(ch);	//pop을 제외한 경우 필요
				}
		}
		if (s.empty())
			cout << "YES\n";
		else {
			cout << "NO\n";
			/*while (!s.empty()) {
				s.pop();
		}*/
	}
	return 0;
}