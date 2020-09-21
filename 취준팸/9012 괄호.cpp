#include<iostream>
#include<string>

using namespace std;

//���� ���������� ��ȣ�� ���� Ư���� �ľ��ϸ� ������ �����ʰ� Ǯ �� �ִ�.

//cnt�� ������ ���� �� ���´� ')'�� �̹� �ϳ� ���� ���±� ������ ������ �Ѵ�.
//�޼ҵ带 ������� �ʰ� �׳� ������������ �ٷ� ���������� ���� �Լ��� ����.
//�׷��� ������ �ٷ� ���� ���� NO�� ����ϰ� �ٷ� ����
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