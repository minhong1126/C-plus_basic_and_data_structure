//5. 최소, 최대 구하기
//백준 10818번 문제

#include <iostream>
using namespace std;

int main() {
	int inp;
	cin >> inp;
	int* array = new int[inp];

	int max, min;
	for (int i = 0; i < inp; i++) {
		cin >> array[i];
		if (i == 0) {
			max = array[i];
			min = array[i];
			continue;
		}
		if (max < array[i]) max = array[i];
		else if (min > array[i]) min = array[i];
	}
	cout << min << ' ' << max;
}