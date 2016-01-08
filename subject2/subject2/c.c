#include <stdio.h>

void my_strcat(char *str, char * message, char *out);
int main()
{
	char string1[99] = { 0 };
	char string2[99] = { 0 };
	char out[99] = { 0 };

	printf("string1 : ");
	scanf("%s", string1);

	printf("string2 : ");
	scanf("%s", string2);

	my_strcat(string1, string2, out);

	printf("\n출력 메시지: %s \n", out);
}

void my_strcat(char *str, char * message, char *out)
{
	int i;
	int n = 0;
	i = 0;
	while (*(str + i) != '\0')
	{
		i++;
		n = i;
	}
	for (i = 0; *(message + i) != '\0'; ++i)
	{
		*((str + n) + i) = *(message + i);
	}

	for (i = 0; *(str + i) != '\0'; i++)
	{
		*(out + i) = *(str + i);
	}
	return;
}
