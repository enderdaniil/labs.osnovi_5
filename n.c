#include <stdlib.h>
#include <stdio.h>
int main()
{
	printf("Vvedite massiv\n");
	int N = 10;
	int a[10];
	float k = 1.247;
	int i;
	int step = N - 1;
	for (i = 0; i < N; i++)
	{
		scanf_s("%d", &a[i]);
	}
	
	while (step >= 1)
	{
		for (i = 0; i < N - step; i++)
		{
			if (a[i] > a[i + step])
			{
				int j = a[i];
				a[i] = a[i + step];
				a[i + step] = j;
			}
		}
		step /= k;
	}

	for (i = 0; i < N; i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}
