#include <stdio.h>

void my_strstr(const char *str, const char *substr, int *idx);

int main()
{
	char inputstr[99] = { 0, };
	char substr[99] = { 0, };
	int index = 0;
	char a = '��';

	printf("%c", a);

	printf("�ִ� 99�� �Է� <inputstr> : ");
	scanf("%s", inputstr);
	printf("ã�� ���ڿ� <substr> : ");
	scanf("\n%s", substr);

	my_strstr(inputstr, substr, &index);

	if (index == -1)
		printf("%s�� ��ġ : ã���� �ϴ� ���ڿ� '%s'�� �������� �ʽ��ϴ�. ", substr, substr);
	else
		printf("%s�� ��ġ : %d", substr, index + 1);
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
