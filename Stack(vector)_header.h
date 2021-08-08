#pragma once
#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;

void push(vector <int> &v, int &num) {
	cout << "어떤 값을 넣으시겠습니까?" << endl;
	int inp;
	cin >> inp;
	v.push_back(inp);
	num++;
	cout << inp << "을 넣었습니다. 자료 개수는 " << num << "개 들어있습니다." << endl;
}

void pop(vector <int> &v, int &num) {
	if (num == 0) {
		cout << "스택이 비었습니다." << endl;
	}
	else {
		v.pop_back();
		cout << "자료를 pop 했습니다. 자료 개수는 " << num - 1 << "개 남았습니다." << endl;
		num--;
	}
}

void peek(vector <int> &v, int &num) {
	if(num == 0) {
		cout << "스택이 비었습니다." << endl;
	}
	else {
		cout << "가장 위의 값은 " << v[num-1] << "입니다. 자료 개수는 " << num << "개 남았습니다." << endl;
	}
}