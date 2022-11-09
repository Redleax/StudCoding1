#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "Praktika_4.h"
#include "myfunc.h"

#define arrayLength 20 //Кол-во жлементов в массиве
#define randMin -50
#define randMax 50

void Task_4_1();

void Praktika_4() {
	int taskNumber = -1;

	while (taskNumber != 0) {
		printf("Enter the task number (0 to exit) => ");
		scanf_s("%i", &taskNumber);
		switch (taskNumber) {
		case 1:
			Task_4_1();
			break;
		}
	}
}

void Task_4_1() {
	double summ = 0, average, maximumAverage = 0;
	int number[arrayLength];
	unsigned int i = 0, i1 = 0, i2 = 0, j = 0, count = 0;

	srand(time(NULL));

	for (int i = 0; i < arrayLength; i++) {
		number[i] = rand() % (randMax - randMin + 1) + randMin;
		printf("%4i", number[i]);
	}
	
	while (i < arrayLength) {
		if (number[i] < 0) {
			summ = 0;
			count = 0;
			j = i;

			while ((j < arrayLength) & (number[j] < 0)) {
				count++;
				summ += number[j];
				j++;
			}
			average = abs(summ / count);

			if (average > maximumAverage) {
				i1 = i;
				i2 = i + count - 1;
				maximumAverage = average;
			}

			i += count + 1;
		}
		else {
			i++;
		}
	}

	printf("\n\n");
	for (int i = i1; i <= i2; i++) {
		printf("%4i", number[i]);
	}
	printf("\n\nAverage = %.2lf", maximumAverage);

	printf("\n\n");
}