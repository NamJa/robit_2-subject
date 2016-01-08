#include <stdio.h>

void myStrchr(const char *inputStr, const char chr, int *index);

int main()
{
	char inputstr[99];
	char findchr;
	int index = 0;

	printf("inputstr: "); scanf("%s", inputstr);
	printf("찾는 문자 <chr> : "); scanf("\n%c", &findchr);

	myStrchr(inputstr, findchr, &index);
	
	if (index != -1)
	{
		printf("%c의 위치 : %d \n", findchr, index);
	}
	else
	{
		printf("%c의 위치 : 찾고자 하는 문자 '%c'가 존재하지 않습니다. \n", findchr, findchr);
	}

}

void myStrchr(const char * str, const char chr, int *idx)
{
	int i;
	
	for (i = 0; *(str + i) != '\0'; i++)
	{
		if (*(str + i) == chr)
		{
			*idx = i + 1;
			break;
		}
		else
		{
			*idx = -1;
		}
	}
	return;
}