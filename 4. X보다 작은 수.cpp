/* 4. X보다 작은 수
 백준 10871번 문제
 문제 설명: acmicpc.net/problem/10871
*/

#include <iostream>
using namespace std;

int main() {
	int max, num;
	cin >> num;
	cin >> max;

	int* array = new int[num];
	int* min = new int[num];
	for (int i = 0; i < num; i++) {
		min[i] = NULL;
	}
	for (int i = 0; i < num; i++) {
		cin >> array[i];
	}

	int j = 0;
	for (int i = 0; i < num; i++) {
		if (max > array[i]) {
			min[j] = array[i];
			j++;
		}
	}

	for (int i = 0; min[i] != NULL; i++) {
		cout << min[i] << ' ';
	}
	
	delete array;
	delete min;
}