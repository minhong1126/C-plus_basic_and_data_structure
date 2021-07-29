#pragma once
#include <cstdio>
#include <iostream>
using namespace std;


bool Empty(int arr[]) {
	if (arr[0] == NULL) return  1;
	else return 0;
}

void push(int* num, int arr[]) {
	int push;
	cout << "넣을 값을 입력하세요" << endl;	//값 입력
	cin >> push;
	arr[*num] = push;
	*num += 1;
	arr[*num] = NULL;
	cout << "현재 자료 개수 " << *num << "개" << endl << endl;
}

void pop(int* num, int arr[]) {
	if ((Empty(arr) == 1) || (*num - 1 < 0)) {
		cout << "스택이 비었습니다." << endl;
	}
	else {
		cout << "pop된 값은 " << arr[*num - 1] << "입니다." << endl << "자료는 " << *num-1 << "개 남았습니다." << endl;
		arr[*num] = NULL;
		*num -= 1;
	}
}

void peek(int* num, int arr[]) {
	if((Empty(arr) == 1) || (*num - 1 < 0)) {
		cout << "스택이 비었습니다." << endl;
	}
	else {
		cout << "가장 위에 있는 자료는 " << arr[*num - 1] << "입니다." << endl;
	}
}




