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
	cout << "���� ���� �Է��ϼ���" << endl;	//�� �Է�
	cin >> push;
	arr[*num] = push;
	*num += 1;
	arr[*num] = NULL;
	cout << "���� �ڷ� ���� " << *num << "��" << endl << endl;
}

void pop(int* num, int arr[]) {
	if ((Empty(arr) == 1) || (*num - 1 < 0)) {
		cout << "������ ������ϴ�." << endl;
	}
	else {
		cout << "pop�� ���� " << arr[*num - 1] << "�Դϴ�." << endl << "�ڷ�� " << *num-1 << "�� ���ҽ��ϴ�." << endl;
		arr[*num] = NULL;
		*num -= 1;
	}
}

void peek(int* num, int arr[]) {
	if((Empty(arr) == 1) || (*num - 1 < 0)) {
		cout << "������ ������ϴ�." << endl;
	}
	else {
		cout << "���� ���� �ִ� �ڷ�� " << arr[*num - 1] << "�Դϴ�." << endl;
	}
}




