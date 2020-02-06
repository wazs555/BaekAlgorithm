#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	if (a <= 0 || a >= 10) return 0;
	if (b <= 0 || b >= 10) return 0;

	printf("%d", a + b);

	return 0;
}