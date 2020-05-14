#include <stdio.h>

int main()
{
	int len = 5;
	int *vec = malloc(sizeof(int) * len);
	for (int i = 0; i <= len; i++)
	{
		printf("%d\n", vec[i]);
	}
	for (int i = 0; i <= len; )
	{
		printf("%p\n", &vec[i]);
	}


}
