#include<stdio.h>
int main()
{
	int arr[5] = { 10,11,22,30,40 };
	int* pa;
	pa = arr;
	int sum=0;
	for (int i = 0;i < 5;i++)
	{
		sum += *(pa + i);
	}
	printf("sum of elements is %d \n", sum);

	return 0;
}