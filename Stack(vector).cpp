#include <cstdio>
#include <iostream>
#include <vector>
#include "Stack(vector)_header.h"
using namespace std;

int main(void) {
	vector <int> v;
	int num = 0;
	int what = 0;

	do {
		cout << "� �۾��� �Ͻðڽ��ϱ�?" << endl;
		cout << "1. push" << endl << "2. pop" << endl << "3. peek" << endl << "4, end" << endl;
		cin >> what;

		switch (what) {
		case 1: 
			push(v, num);
			break;
		case 2: 
			pop(v, num);
			break;
		case 3: 
			peek(v, num);
			break;
		}
		cout << endl;
	} while (what != 4);
	cout << "�����մϴ�." << endl;
	return 0;
}