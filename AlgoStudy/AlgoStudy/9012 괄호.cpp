//���� ���� �̿��ؼ� Ǯ��
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
		//�迭���� ������� �ݺ��� ���
		for (char ch : str) {
			if (ch == '(') {
				s.push(ch);
			}
			else
				if (s.empty()) {
					s.push(ch);
					continue;	//ctn�� �ٸ� ��� ����
				}
				else if (s.top() == '(') {
					s.pop();
				}
				else if (s.top() == ')') {
					s.push(ch);	//pop�� ������ ��� �ʿ�
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