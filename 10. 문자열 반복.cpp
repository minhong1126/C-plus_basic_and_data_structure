/* 10. 문자열 반복
 백준 2675번 문제
 문제 설명: https://www.acmicpc.net/problem/2675*/
#include <cstdio>
#include <iostream>
#include <cstring>
using namespace std;

int main() {
	int num;
	cin >> num;
	for (int i = 0; i < num; i++) {
		int nm;
		string str;
		cin >> nm;
		cin >> str;
		char* arr = new char[str.length() + 1]; 
		memmove(arr, str.c_str(), str.length() + 1);
		for (int k = 0; k < str.length(); k++) {
			for (int j = 0; j < nm; j++) {
				cout << arr[k];
			}
		}
		cout << endl;
	}
}