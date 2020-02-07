#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

const int MAX = 10000;

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
			printf("%d\n", data[len-1]);
			data[len-1] = 0;
			len--;
			
		}
	}
	void size()
	{
		printf("%d\n", len);
	}
	void empty()
	{
		if (len == 0) printf("1\n");
		else printf("0\n");
	}
	void top()
	{
		if (len <= 0) printf("-1\n");
		else
		{
			printf("%d\n", data[len - 1]);
		}
	}
}S;

int main()
{
	int n; // ����� ��
	int x; // ���ÿ� �� ����
	char cmd[100]; // command �Է�
	S s1;

	scanf("%d", &n); // ����� �� �Է�
	for (int i = 0; i < n; i++)
	{
		scanf("%s", cmd);
		if (strcmp(cmd, "push") == 0) // push�� ���
		{
			scanf("%d", &x);
			s1.push(x);
		}
		else if (strcmp(cmd, "pop") == 0)
		{
			s1.pop();
		}

		else if (strcmp(cmd, "size") == 0)
		{
			s1.size();
		}
		else if (strcmp(cmd, "empty") == 0)
		{
			s1.empty();
		}
		else
		{
			s1.top();
		}
	}


	return 0;
}