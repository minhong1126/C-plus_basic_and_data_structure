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
		cout << "어떤 작업을 하시겠습니까?" << endl;
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
	cout << "종료합니다." << endl;
	return 0;
}