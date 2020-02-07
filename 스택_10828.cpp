#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string,h>

const int MAX  = 10000;

typedef struct Stack
{
	int data[11000];
	int len = 0;
	int capacity = 0;

	void push(int x)
	{
		if (len >= MAX) printf("Overflow!");
		else data[len++] = x;
	}
	void pop()
	{
		if (len <= 0)
		{
			printf("-1\n");
		}
		else
		{
			printf("%d", data[len - 1]);
			data[len - 1] = 0;
			len--;
		}
	}
	void size()
	{
		printf("%d\n", size);
	}
	int empty()
	{
		if (len == 0) printf("1");
		else printf("0");
	}
	int top()
	{
		if (len <= 0) printf("-1");
		else
		{
			printf("%d", data[len - 1]);
		}
	}
}S;

int main()
{
	

	return 0;
}