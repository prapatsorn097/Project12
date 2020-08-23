#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int i, j, num1;
	printf("Enter number : ");
	scanf("%d", &num1);
	for (i = 1; i <= num1; i++) {
		for (j = 1; j <= num1; j++) {
			if (i == 1 || i == num1 || j == 1 || j == num1)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
	return 0;
}