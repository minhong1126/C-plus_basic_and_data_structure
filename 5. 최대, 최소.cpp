//5. 최소, 최대 구하기
//백준 10818번 문제

//배열 사용
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

//vector 사용
#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;

int main() {
	int num;
	cin >> num;
	vector <int> v(num);

	for (int i = 0; i < num; i++) {
		cin >> v[i];
	}
	int max = v[0], min = v[0];
	for (int i = 0; i < num; i++) {
		if (v[i] < min) min = v[i];
		else if (v[i] > max) max = v[i];
	}
	cout << min << " " << max;
}
