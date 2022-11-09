#include <stdio.h>
#include <math.h>
#include "Praktika_1.h"
#include "myfunc.h"

void Task_1_1();
void Task_1_2();

void Praktika_1() {
	int taskNumber = -1;

	while (taskNumber != 0) {
		printf("Enter the task number (0 to exit) => ");
		scanf_s("%i", &taskNumber);
		switch (taskNumber) {
		case 1:
			Task_1_1 ();
			break;
		case 2:
			Task_1_2 ();
			break;
		}
	}
}

void Task_1_1() {
	double Side_A, Side_B, Side_C;

	printf("Enter side A => ");
	scanf_s("%lf", &Side_A);
	printf("Enter side B => ");
	scanf_s("%lf", &Side_B);
	printf("Enter side C => ");
	scanf_s("%lf", &Side_C);

	printf("A-side height = %6.3lf\n", H(Side_A, Side_B, Side_C));
	printf("B-side height = %6.3lf\n", H(Side_B, Side_C, Side_A));
	printf("C-side height = %6.3lf\n", H(Side_C, Side_A, Side_B));
	printf("\n");
}

void Task_1_2() {
	int t = 2, z = 3;
	double y = cos(5);
	double x = 4 * log(pow(y, 3)) - (z / t);
	printf("t = %i, z = %i, y = %4.2lf, x = %4.2lf\n\n", t, z, y, x);
}