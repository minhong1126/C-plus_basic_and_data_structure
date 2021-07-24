/*6. 시계
 백준 2884번
 문제 설명: https://www.acmicpc.net/problem/2884
*/
#include <cstdio>
#include <iostream>
using namespace std;

int main() {
	int hour, sec;
	cin >> hour;
	cin >> sec;

	int time = hour * 60 + sec;
	time = time - 45;
	if (time < 0) time = time + 1440;
	hour = time / 60;
	sec = time % 60;

	cout << hour << " ";
	cout << sec;
}
