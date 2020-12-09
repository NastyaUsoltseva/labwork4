#include<stdio.h>
int main()
{
	int m = 0;
	int array2[10];
	int array[10];

	printf("Enter values of array");
	for (int i = 0; i < 10; i++)
	{
		scanf_s("%d", &array[i]);
	}
	for (int i = 0; i < 10; i++)
	{
		printf("%d", array[i]);
	}

	for (int i = 0; i < 10; i++)
	{
		if (array[i] < 0)
		{
			array2[m++] = array[i];
		}
	}

	for (int i = 0; i < 10; i++)
	{
		if (array[i] == 0)
		{
			array2[m++] = array[i];
		}
	}

	for (int i = 0; i < 10; i++)
	{
		if (array[i] > 0)
		{
			array2[m++] = array[i];
		}
	}
	
	for (int i = 0; i < 10; i++)
	{
		printf("%d", array2[i]);
	}
	return 0;
}