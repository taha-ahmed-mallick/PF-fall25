#include <stdio.h>

int main()
{
	int r, c;
	printf("Find Maximum Element Of Matrix!!!\n");
	printf("Enter No of Rows:");
	scanf("%d", &r);
	printf("Enter No of Cols:");
	scanf("%d", &c);

	int arr[r][c];
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			scanf("%d", &arr[i][j]);
		}
	}
	int max = arr[0][0];
	printf("\nEntered Matrix\n");
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++) {
			printf("%d ", arr[i][j]);
			if (arr[i][j] > max)
				max = arr[i][j];
		}
		printf("\n");
	}

	printf("\nThe Maximum Element of the given Matrix is %d", max);
	return 0;
}