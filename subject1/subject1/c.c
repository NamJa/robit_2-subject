#include <stdio.h>

void myStrLen(char * str, int *size);

int main()
{
	char string[99] = { 0 };
	int result = 0;

	printf("string: ");
	scanf("%s", string);
	myStrLen(string, &result);

	printf("문자열 %s의 길이 : %d\n", string, result);
}

void myStrLen(char *str, int *size)
{
	int i, cnt = 0;

	for (i = 0; *(str + i) != '\0'; i++)
	{
		cnt = i;
	}
	*size = cnt+1;
}