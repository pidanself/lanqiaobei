#include<bits/stdc++.h>
using namespace std;

int n;
bool isvis[10];

bool isrepeat(int num) {
	while (num) {
		int digit = num % 10;
		if (digit == 0 || isvis[digit])
			return true;
		isvis[digit] = true;
		num /= 10;
	}
	return false;
}

int cntDigits(int num) {
	return (int)log10(num) + 1;
}

int main(void) {
	
	int n, ans = 0,fu=0;
	scanf("%d", &n);
	
	for (int x = 2; x <= n - 2; x++) {
		for (int z = 2; ; z++) {
			int y = z * (n - x);
			fill(isvis, isvis + 10, 0);
			int cnt = cntDigits(x) + cntDigits(y) + cntDigits(z);
			fu++;
			if (cnt > 9)
				break;
			if (cnt < 9)
				continue;
			if (isrepeat(x) || isrepeat(y) || isrepeat(z))
				continue;
			ans++;
		}
	}
	
	printf("%d\n", fu);
	
	return 0;
}
