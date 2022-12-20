#include <stdio.h>
#include <math.h>
#include "Praktika_03.h"
#include "myfunc.h"

void Task_3_1();
void Task_3_2();
void Task_3_3();

void Praktika_3() {
	int taskNumber = -1;

	while (taskNumber != 0) {
		printf("Enter the task number (0 to exit) => ");
		scanf_s("%i", &taskNumber);
		switch (taskNumber) {
		case 1:
			Task_3_1();
			break;
		case 2:
			Task_3_2();
			break;
		case 3:
			Task_3_3();
			break;
		}
	}
}

void Task_3_1() {
	double Side_A, Side_B, Side_C;
	int Side = -1;
	_Bool TriangleErrorFlag = 0;

	do {
		if (TriangleErrorFlag == 1) {
			printf("Akhtung!!! There is no god and the triangle that you enter too. Try another one time\n");
		}
		printf("Enter side A => ");
		scanf_s("%lf", &Side_A);
		printf("Enter side B => ");
		scanf_s("%lf", &Side_B);
		printf("Enter side C => ");
		scanf_s("%lf", &Side_C);
		TriangleErrorFlag = 1;
	} while (!((Side_A + Side_B > Side_C) & (Side_A + Side_C > Side_B) & (Side_B + Side_C > Side_A)));

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

void Task_3_2() {
	double leftBorder, rightBorder, step, x;
	int i = 1;

	printf("Enter the left border of the segment => ");
	scanf_s("%lf", &leftBorder);
	printf("Enter the right border of the segment => ");
	scanf_s("%lf", &rightBorder);
	printf("Enter function step => ");
	scanf_s("%lf", &step);
	
	x = step;
	while (x <= rightBorder) {
		printf("Y%i = %lf\n", i, pow(x, 3) + exp(-x));
		x += step;
		i++;
	}

	printf("\n");
}

void Task_3_3() {
	unsigned int n = 0, num;
	double sqRoot;
	
	printf("Enter count of numbers => ");
	scanf_s("%i\n", &n);

	for (int i = 1; i <= n; i++) {
		scanf_s("%i", &num);
		sqRoot = sqrt(num);
		if (sqRoot == (int)sqRoot) {
			printf("Amazing! This number is the square of %i\n\n", (int)sqRoot);
		}
		else {
			printf("Unfortunately the number %i is not the square of any number\n\n", num);
		}
	}
}