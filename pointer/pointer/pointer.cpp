#include <stdio.h>
int facto(int n) {
	int i = 2;
	printf("%d = ", n);
	for (;;) {
		if (n % i >= 1) {
			i++;
		}
		if ((n % i == 0) && (n / i > 1)) {
			n /= i;
			printf("%d * ", i);
		}
		else if ((n % i == 0) && (n / i == 1)) {
			printf("%d", i);
			break;
		}
	}
	return 0;
}
int main() {
	int n;
	printf("Type the number you want to factorize : ");
	scanf_s("%d", &n);
	facto(n);
	return 0;
}