//입력받는 방법이 틀림
//배열로 받고 계산하는 것이 더 편하다.
#include<iostream>
#include<cstdio>
using namespace std;

int main() {
	int h1, m1, s1;
	int h2, m2, s2;
	int h3, m3, s3;
	
	//14:00:00 형식으로 입력받는 방법
	cin >> h1 >> m1 >> s1;
	cin >> h2 >> m2 >> s2;

	if (h2 >= h1) {
		if (s2 > s1) 
			s3 = s2 - s1;
		else {
			m2 -= 1;
			s3 = s2 + 60 - s1;
		}

		if (m2 > m1)
			m3 = m2 - m1;
		else {
			h2 -= 1;
			m3 = m2 + 60 - m1;
		}
		h3 = h2 - h1;
	}
	else {
		h2 = h2 + 24;
		if (s2 > s1)
			s3 = s2 - s1;
		else {
			m2 -= 1;
			s3 = s2 + 60 - s1;
		}

		if (m2 > m1)
			m3 = m2 - m1;
		else {
			h2 -= 1;
			m3 = m2 + 60 - m1;
		}
		h3 = h2 - h1;
	}
	if (h2 == 0 && m2 == 0 && s2 == 0)
		h2 = 24;

	cout << h3 << ":" << m3 << ":" << s3 << '\n';

	return 0;
}