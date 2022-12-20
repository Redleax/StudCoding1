#include <stdio.h>
#include <math.h>
#include "Praktika_02.h"
#include "myfunc.h"

void Task_2_1();
void Task_2_2();
void Task_2_3();

void Praktika_2() {
	int taskNumber = -1;

	while (taskNumber != 0) {
		printf("Enter the task number (0 to exit) => ");
		scanf_s("%i", &taskNumber);
		switch (taskNumber) {
		case 1:
			Task_2_1();
			break;
		case 2:
			Task_2_2();
			break;
		case 3:
			Task_2_3();
			break;
		}
	}
}

void Task_2_1() {
	double Side_A, Side_B, Side_C;
	int Side = -1;

	printf("Enter side A => ");
	scanf_s("%lf", &Side_A);
	printf("Enter side B => ");
	scanf_s("%lf", &Side_B);
	printf("Enter side C => ");
	scanf_s("%lf", &Side_C);

	printf("Enter the side of the triangle for which the height is based => ");
	Side = ReadChar();

	switch ((char)Side) {
	case 'A':
		printf("A-side height = %6.3lf\n", H(Side_A, Side_B, Side_C));
		break;
	case 'B':
		printf("B-side height = %6.3lf\n", H(Side_B, Side_C, Side_A));
		break;
	case 'C':
		printf("C-side height = %6.3lf\n", H(Side_C, Side_A, Side_B));
		break;
	};

	printf("\n");
}

void Task_2_2() {
	double coordX, coordY;

	printf("Enter X coordinate => ");
	scanf_s("%lf", &coordX);
	printf("Enter Y coordinate => ");
	scanf_s("%lf", &coordY);

	if ((pow(coordX, 2) + pow(coordY, 2) <= 1) || ((abs(coordY) <= 1) && (coordX >= 0) && (coordX <= 1))) {
		printf("Entered point is in the area\n\n");
	}
	else {
		printf("Entered point isn't in the area\n\n");
	}
}

void Task_2_3() {
	double a = 4.8, b = -7.9, m, n;

	if (a >= b) {
		n = cbrt(a - b);
	}
	else {
		n = pow(a, 2) + (a - b) / (sin(a * b));
	}

	if (n < b) {
		m = ((n + a) / -b) + sqrt(pow(sin(a), 2) - cos(n));
	}
	else if (n = b) {
		m = pow(b, 2) + tan(n * a);
	}
	else {
		m = pow(b, 3) + n * pow(a, 2);
	}

	printf("a = %4.2lf, b = %4.2lf, n = %4.2lf, m = %4.2lf\n\n", a, b, n, m);
}