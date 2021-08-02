/* 9. 상수
 백준 2908문제
 문제 설명: https://www.acmicpc.net/problem/2908
 */
#include <cstdio>
#include <iostream>
using namespace std;

int change(int ans) {
	int tmp[3];
	for (int i = 0; ans != 0; i++) {
		tmp[i] = ans % 10;
		ans /= 10;
	}
	ans = tmp[0] * 100 + tmp[1] * 10 + tmp[2];
	return ans;
}

int main(void) {
	int fir, sec;
	cin >> fir;
	cin >> sec;

	fir = change(fir);
	sec = change(sec);

	sec < fir ? (cout << fir) : (cout << sec);
}