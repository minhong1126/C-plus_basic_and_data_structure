#include <cstdio>
#include <iostream>
using namespace std;

int main() {
	int ans;
	cin >> ans;

	int nw = -1;
	int num[2];
	int count = 0;
	nw = ans;
	 do{
		 num[0] = nw / 10;
		 num[1] = nw % 10;
		 int pl = num[0] + num[1];
		 nw = num[1] * 10 + pl % 10;
		 count++;
	}while (nw != ans);
	cout << count;
}