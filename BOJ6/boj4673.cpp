#include <iostream>
using namespace std;

int self_num();
int main(void) {
	self_num();
	return 0;
}
int self_num(){
	int arr[10001] = { 0, };
	int c = 0;
	for (int i = 1; i < 10001; i++) {
		if (i < 10) {
			c = i + i;
			arr[c] = 1;
		}
		else if (i < 100) {
			c = i + (i / 10) + (i % 10);
			arr[c] = 1;

		}
		else if (i < 1000) {
			c = i + (i / 100) + ((i % 100) / 10)+((i % 100) % 10);
			arr[c] = 1;

		}
		else if (i < 10000) {
			c = i + (i / 1000) + ((i % 1000) / 100) + (((i % 1000) % 100) / 10) + (((i % 1000) % 100) % 10);
			if (c <= 10000) {
				arr[c] = 1;

			}
		}
	}

	for (int j = 1; j < 10001; j++) {
		if (arr[j] == 0) {
			cout<<j<<"\n";
		}
	}
	return 0;
}