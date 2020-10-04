#include<iostream>
#include<stack>
#include<string>
using namespace std;

struct Stack {	//�빮�ڷ� ����
	int data[10000];
	int size;
	//������
	Stack() {
		size = 0;
	}

	void push(int num) {
		data[size] = num;
		size += 1;
	}
	bool empty() {
		if (size == 0)
			return true;
		else
			return false;
	}
	int pop() {
		if (empty())
			return -1;	//�ڷ��� ��������� void X
		else {
			size -= 1;
			return data[size];	//data�� size��° ���� ���
		}
	}
	int top() {
		if (empty())
			return -1;
		else {
			return data[size-1];
		}
	}
	//size�� �׳� ����ϸ� ��

};

int main() {
	int N, num;
	string str;
	
	cin >> N;
	
	Stack s;

	while (N--) {
		cin >> str;
		if (str == "push") {
			cin >> num;
			s.push(num);
		}
		else if (str == "top") {
			//top�Լ��� empty�� �ֱ⶧��
			//cout << (s.empty() ? -1 : s.top()) << '\n';
			if (s.empty())
				cout << "-1" << '\n';
			else
				cout << s.top() << '\n';
		}
		else if (str == "pop"){
			cout << (s.empty() ? -1 : s.top()) << '\n';
			
			if (!s.empty()) {
				s.pop();
			}
		}
		else if (str == "size")
			cout << s.size << '\n';
		else if (str == "empty") {
			cout << s.empty() << '\n';
		}
	}

	return 0;
}