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
	cin.ignore();	//ù��° ���๮�� ����
	while (T--) {
		getline(cin, str);
		str += '\n';
		stack<char> s;	//�� ������ ���� �ϳ��� char
		for (auto ch : str) {	//�ڷ��� ���� : �ڷ��� ������)
			if (ch == ' ' || ch == '\n') {
				while (!s.empty()) {	//�������� �ݺ�. ���� ������ ��� �Ѵ�
					cout << s.top();
					s.pop();
				}
				cout << ch; //���๮�� �� ���� ���
			}
			else {
				s.push(ch);	//�� �ܾ� ������ �ٽ� ���ÿ� �ܾ� �ֱ�
			}
		}
	}

	return 0;
}