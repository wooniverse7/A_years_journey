#include<iostream>
#include<stack>
#include<string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int T;
	string str;
	
	cin >> T;
	cin.ignore();	//첫번째 개행문자 무시
	while (T--) {
		getline(cin, str);
		str += '\n';
		stack<char> s;	//한 스택은 글자 하나라서 char
		for (auto ch : str) {	//자료형 원소 : 자료형 끝까지)
			if (ch == ' ' || ch == '\n') {
				while (!s.empty()) {	//빌때까지 반복. 비지 않으면 계속 한다
					cout << s.top();
					s.pop();
				}
				cout << ch; //개행문자 및 공백 출력
			}
			else {
				s.push(ch);	//한 단어 끝나고 다시 스택에 단어 넣기
			}
		}
	}

	return 0;
}