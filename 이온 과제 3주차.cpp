#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int arr[6];
	int i;
	int total = 0;

	scanf("%d, %d, %d, %d, %d, %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4], &arr[5]);

	for (i = 0; i<6; i++) {
		total += arr[i];
	}

	printf("%d\n", total);

}