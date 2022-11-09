#include <stdio.h>
#include <math.h>
#include "Praktika_5.h"
#include "myfunc.h"

#define arrayLength 100//Кол-во жлементов в массиве
#define randMin -100
#define randMax 100

void Task_5_1();

void Praktika_5() {
	int taskNumber = -1;

	while (taskNumber != 0) {
		printf("Enter the task number (0 to exit) => ");
		scanf_s("%i", &taskNumber);
		switch (taskNumber) {
		case 1:
			Task_5_1();
			break;
		}
	}
}

void Task_5_1() {
	int summ = 0, number[arrayLength], count[randMax - randMin + 1] = { 0 };
	double average;

	srand(time(NULL));

	for (int i = 0; i < arrayLength; i++) {
		number[i] = rand() % (randMax - randMin + 1) + randMin;
		printf("%4i", number[i]);
		count[number[i] - randMin]++;
		summ += number[i];
	}

	average = summ / arrayLength;
	printf("\n\nAverage = %.2lf", average);

	printf("\n\n");

	for (int i = 0; i < arrayLength; i++) {
		if (count[number[i] - randMin] > 1) {
			number[i] = average;
		}

		printf("%4i", number[i]);
	}

	printf("\n\n");
}