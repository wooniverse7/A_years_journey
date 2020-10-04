#include<iostream>
#include<stack>
#include<string>
using namespace std;

struct Stack {	//대문자로 설정
	int data[10000];
	int size;
	//생성자
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
			return -1;	//자료형 맞춰줘야함 void X
		else {
			size -= 1;
			return data[size];	//data의 size번째 원소 출력
		}
	}
	int top() {
		if (empty())
			return -1;
		else {
			return data[size-1];
		}
	}
	//size는 그냥 출력하면 됨

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
			//top함수에 empty가 있기때문
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