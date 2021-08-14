/* 12. 괄호 스택
 백준 문제 9012번
 문제 설명: https://www.acmicpc.net/problem/9012*/
#include <cstdio>
#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int num;
	cin >> num;

	int i = 0;
	no:
	for (; i < num;) {
		string str;
		cin >> str;
		char* arr = new char[str.length() + 1];
		memmove(arr, str.c_str(), str.length() + 1);
		vector <char> v(num);


		for (int j = 0; j < str.length(); j++) {
			if (arr[j] == '(') v.push_back(1);
			else {
				if (count(v.begin(), v.end(), 1) == 0 && arr[j] == ')') {
					cout << "NO" << endl;
					i++;
					goto no;
				}
				else v.pop_back();
			}
		}
		if (count(v.begin(), v.end(), 1) == 0) cout << "YES" << endl;
		else cout << "NO" << endl;
		i++;
	}
}
