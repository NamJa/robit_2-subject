#include <stdio.h>

int bubble(int *arr, int size);

int main()
{
	int arr[10] = { 0, };
	int i;

	printf("입력 \n");
	for (i = 0; i < 10; i++)
	{
		printf("\n%d : ", i);
		scanf("%d", &arr[i]);
	}

	bubble(arr, 10);

	printf("출력:\n");

	for (i = 0; i < 10; i++)
	{
		printf("\n%d : %d\n", i, arr[i]);
	}
}

int bubble(int *arr, int size)
{
	int i, j, temp;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < (size - i) - 1; j++)
		{
			if (arr[j] > arr[j + 1]) 
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}