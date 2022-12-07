#include <stdio.h>

int main() {

	int i;
	int receive;
	int j;
	int k;

	scanf_s("%d", &receive);


	for (i = 0; i < receive; i++) {
		for (j = 1; j < receive - i; j++) {
			printf(" ");
		}
		for (k = 0; k <= i * 2; k++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}