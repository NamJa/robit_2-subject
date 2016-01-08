#include <stdio.h>

void my_strstr(const char *str, const char *substr, int *idx);

int main()
{
	char inputstr[99] = { 0, };
	char substr[99] = { 0, };
	int index = 0;
	char a = '김';

	printf("%c", a);

	printf("최대 99개 입력 <inputstr> : ");
	scanf("%s", inputstr);
	printf("찾는 문자열 <substr> : ");
	scanf("\n%s", substr);

	my_strstr(inputstr, substr, &index);

	if (index == -1)
		printf("%s의 위치 : 찾고자 하는 문자열 '%s'가 존재하지 않습니다. ", substr, substr);
	else
		printf("%s의 위치 : %d", substr, index + 1);
}

void my_strstr(const char *str, char *substr, int *idx)
{
	int i = 0, a;

	while (str[i] != '\0')
	{
		a = 0;
		while (str[i + a] == substr[a])
		{
			if (substr[a + 1] == '\0')
			{
				return *idx = i;
			}
			a++;
		}
		i++;
	}
	*idx = -1;
	return *idx;
}
