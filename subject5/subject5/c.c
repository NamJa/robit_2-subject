#include <stdio.h>

int myAtoi(const char *inputstr, int *outnum);

int main()
{
	char input[99] = { 0, };
	int result = 0;
	int a;
	printf("���������� ��ȯ�� ���� �Է� : ");
	scanf("%s", input);
	myAtoi(input, &result);

	
	printf("int�� ���� : %d\n", result);
}

int myAtoi(const char *inputstr, int *outnum)
{
	char substr[99] = { 0, };
	int result = 0, i;

	if (*inputstr == '-')
	{
		for (i = 1; inputstr[i] != '\0'; i++)
		{
			if ('A' <= inputstr[i] && inputstr[i] <= 'z')
				return 0;
			result = 10 * result + inputstr[i] - '0';
		}
		return *outnum = result * -1;
	}

	for (i = 0; inputstr[i] != '\0'; i++)
	{
		if ('A' <= inputstr[i] && inputstr[i] <= 'z')
			return 0;
	}

	for (i = 0; inputstr[i] != '\0'; i++)
	{
		result = 10 * result + inputstr[i] - '0';
	}
	return *outnum = result;
}