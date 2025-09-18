#include<stdio.h>
int Prime(int x);
int main()
{
	
	int n;
	printf("enter arr size>>");
	scanf_s("%d",& n);
	int arr[100];
	printf("enter elements(1~n)>>");
	for (int i = 0;i < n;i++)//arr ရိုက်ထည့်
	{
		scanf_s("%d", &arr[i]);
	}
	printf("entered elements>>");
	for (int i = 0;i < n;i++)//ူloop for print
	{
		printf("%d ", arr[i]);
	}
	printf("\n prime numbers>>");//check prime and print
	for (int i = 0;i < n;i++) {
		if (Prime(arr[i])) {
			printf("%d ", arr[i]);
		}
	}

	
	return 0;
}
int Prime(int x)//check prime
{
	if (x <= 1) return 0;
	for (int i = 2;i * i <= x;i++) {
		if (x % i == 0) return 0;
	}
	return 1;
}