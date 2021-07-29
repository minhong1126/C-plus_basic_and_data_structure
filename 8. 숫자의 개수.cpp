/* 8. 숫자의 개수
 백준 2577번 문제
 문제 설명: https://www.acmicpc.net/problem/2577*/
 
#include <cstdio>
#include <iostream>
using namespace std;

int main() {
	int A, B, C;
	cin >> A;
	cin >> B;
	cin >> C;

	int result = A * B * C;
	int ans[10];
	for (int i = 0; i < 10; i++) ans[i] = 0;
	while (result != 0) {
		for (int i = 0; i < 10; i++) {	//0~9동안
			if (result % 10 == i) ans[i]++;	//나머지 값이 i와 동일하면 기존 값에 +1
		}
		result /= 10;	//나누기 10
	}

	for (int i = 0; i < 10; i++) cout << ans[i] <<endl;
}