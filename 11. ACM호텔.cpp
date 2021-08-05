/* 11. ACM 호텔
 백준 10250번 문제
 문제 설명: https://www.acmicpc.net/problem/10250
 
 풀이 방식: 101, 201, 301 순서로 높이부터 올라가게 한 후 다음에 102 로 넘어가는 순서*/
#include <cstdio>
#include <iostream>
using namespace std;

int main() {
	int num;
	cin >> num;
	
	for (int i = 0; i < num; i++) {
		int H, W, N;
		int height = 1;
		int weight = 1;
		cin >> H >> W >> N;
		for (int j = 1; j < N; j++) {
			height++;
			if (height > H) {
				height = 1;
				weight++;
			}
		}
		cout << height * 100 + weight << endl;
	}
}
