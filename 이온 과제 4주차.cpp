#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int arr[6];
	int i, j , k;
	printf("6개의 숫자를 입력하세요 : ");
	scanf("%d, %d, %d, %d, %d, %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4], &arr[5]);

	for (i = 0; i < 6; i++) {
		for (j = 0; j < 5 - i; j++) {
			if (arr[j] > arr[j + 1]) {
				k = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = k;
			}
		}
	}
	printf("%d,%d,%d,%d,%d,%d", arr[0], arr[1], arr[2], arr[3], arr[4], arr[5]);


}