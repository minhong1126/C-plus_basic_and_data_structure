/* 버블 정렬
 백준 2750문제
 문제 설명: https://www.acmicpc.net/problem/2750*/
#include <cstdio>
#include <iostream>
using namespace std;

int main() {
	int num;
	cin >> num;
	int* arr = new int[num];
	for (int i = 0; i < num; i++) {
		cin >> arr[i];
	}

	for (int i = 0; i < num; i++) {
		for (int j = 1; j < num; j++) {
			if (arr[j - 1] > arr[j]) {
				int tmp = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = tmp;
			}
		}
	}
	for (int i = 0; i < num; i++) cout << arr[i] << endl;
}
