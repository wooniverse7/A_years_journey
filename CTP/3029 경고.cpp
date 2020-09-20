#include<iostream>
#include<string>

using namespace std;

int main() {
	string start, end;
	int s[3], e[3], r[3];

	//strig으로 받아서 쪼갠 다음 stoi로 int형으로 바꾸고 배열에 집어넣기
	cin >> start >> end;
	s[0] = stoi(start.substr(0, 2));
	s[1] = stoi(start.substr(3, 2));
	s[2] = stoi(start.substr(6, 2));
	e[0] = stoi(end.substr(0, 2));
	e[1] = stoi(end.substr(3, 2));
	e[2] = stoi(end.substr(6, 2));

	// > -> >=
	if (e[0] >= s[0]) {
		if (e[2] >= s[2])
			r[2] = e[2] - s[2];
		else {
			r[2] = e[2] + 60 - s[2];
			e[1]--;
		}
		if (e[1] >= s[1])
			r[1] = e[1] - s[1];
		else {
			r[1] = e[1] + 60 - s[1];
			e[0]--;
		}
		r[0] = e[0] - s[0];
	}
	else {
		e[0] += 24;
		
		if (e[2] >= s[2])
			r[2] = e[2] - s[2];
		else {
			r[2] = e[2] + 60 - s[2];
			e[1]--;
		}
		if (e[1] >= s[1])
			r[1] = e[1] - s[1];
		else {
			r[1] = e[1] + 60 - s[1];
			e[0]--;
		}
		r[0] = e[0] - s[0];
	}

	if (r[0] == 0 && r[1] == 0 && r[2] == 0)
		r[0] = 24;

	//10이하일때 앞에 0넣기
	for (int i = 0; i < 3; i++) {
		if (r[i] < 10)
			cout << "0" << r[i];
		else
			cout << r[i];
		if (i != 2)
			cout << ":";
	}

	return 0;
}

	