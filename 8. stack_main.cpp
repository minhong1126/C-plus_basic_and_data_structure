#include <cstdio>
#include <iostream>
#include "stack.h"
using namespace std;

int main(void) {
	int* arr = new int;
	arr[0] = NULL;
	int num = 0;
	int what;
	
	do{
		cout << "어떤 작업을 하시겠습니까?" << endl << endl;
		cout << "1. push" << endl << "2. pop" << endl << "3. peek" << endl;
		cout << "4. end" << endl;
		cin >> what;
		switch (what) {
			case 1:
				push(&num, arr);
				break;
			case 2:
				pop(&num, arr);
				break;
			case 3:
				peek(&num, arr);
				break;
		}
	} while (what != 4);
	cout << "종료합니다.";
	return 0;
}
