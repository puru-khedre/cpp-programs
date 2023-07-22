// C Program to print hourglass pattern using star *
#include <stdio.h>
int main()
{
	int rows = 5;

	// first outer loop to iterate each row
	for (int i = 0; i < 2 * rows - 1; i++) {

		// assigning comparator
		int comp;
		if (i < rows) {
			comp = 2 * i + 1;
		}
		else {
			comp = 2 * (2 * rows - i) - 3;
		}

		// first inner loop to print leading spaces
		for (int j = 0; j < comp; j++) {
			printf(" ");
		}

		// second inner loop to print star *
		for (int k = 0; k < 2 * rows - comp; k++) {
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
