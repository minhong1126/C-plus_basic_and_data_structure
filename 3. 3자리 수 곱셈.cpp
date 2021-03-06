/*3. 3자리수 곱셈
 백준 문제 2588번
 문제 설명: https://www.acmicpc.net/problem/2588
 방법: 두 번째 입력된 수를 한 자리씩 나누어 곱함. 끝에 두 번째 수를 복사한 값과 첫 번째 값을 곱함.
*/

#include <cstdio>
#include <iostream>
using namespace std;

int main() {
	int fir, sec;
	cin >> fir;
	cin >> sec;
	int sec2 = sec;
	while (sec != 0) {
		int num = sec % 10;
		sec = sec / 10;
		cout << num * fir << endl;
	}
	cout << fir * sec2 << endl;
}