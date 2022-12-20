#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "Praktika_07.h"
#include "myfunc.h"

#define arrayLength 50
#define randMin -100
#define randMax 100

void Task_7_1();

void Praktika_7() {
	int taskNumber = -1;

	while (taskNumber != 0) {
		printf("Enter the task number (0 to exit) => ");
		scanf_s("%i", &taskNumber);
		switch (taskNumber) {
		case 1:
			Task_7_1();
			break;
		}
	}
}

void Task_7_1() {
	int* Array;
	int* currentNumber;
	int minNumber = -1;

	srand(time(NULL));
	Array = (int*)malloc(sizeof(int[arrayLength]));

	for (currentNumber = Array; currentNumber < Array + arrayLength; currentNumber++) {
		*currentNumber = rand() % (randMax - randMin + 1) + randMin;
		printf("%4i", *currentNumber);

		if ((*currentNumber > 0) && ((*currentNumber < minNumber) || (minNumber < 0))) {
			minNumber = *currentNumber;
		}
	}
	printf("\n\n\n");

	for (currentNumber = Array; currentNumber < Array + arrayLength; currentNumber++) {
		if (*currentNumber < 0) {
			*currentNumber = minNumber;
		}

		printf("%4i", *currentNumber);
	}
	printf("\n\n");

	free(Array);
}