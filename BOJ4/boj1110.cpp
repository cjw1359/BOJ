#include <iostream>
using namespace std;

int main(){
    int k, t;
	cin >> t;
	k = t;
	int count = 0;
	int a, b;
	while (1) {
		a = k / 10;
		b = k % 10;
		k = b * 10 + ((a + b)%10);
		count++;
		if (k == t)
			break;
	}
	cout << count << endl;
	return 0;
}