#pragma once
#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;

void push(vector <int> &v, int &num) {
	cout << "� ���� �����ðڽ��ϱ�?" << endl;
	int inp;
	cin >> inp;
	v.push_back(inp);
	num++;
	cout << inp << "�� �־����ϴ�. �ڷ� ������ " << num << "�� ����ֽ��ϴ�." << endl;
}

void pop(vector <int> &v, int &num) {
	if (num == 0) {
		cout << "������ ������ϴ�." << endl;
	}
	else {
		v.pop_back();
		cout << "�ڷḦ pop �߽��ϴ�. �ڷ� ������ " << num - 1 << "�� ���ҽ��ϴ�." << endl;
		num--;
	}
}

void peek(vector <int> &v, int &num) {
	if(num == 0) {
		cout << "������ ������ϴ�." << endl;
	}
	else {
		cout << "���� ���� ���� " << v[num-1] << "�Դϴ�. �ڷ� ������ " << num << "�� ���ҽ��ϴ�." << endl;
	}
}