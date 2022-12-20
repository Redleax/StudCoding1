#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "Praktika_06.h"
#include "myfunc.h"

#define arrayLength 5
#define randMin -9
#define randMax 9

void Task_6_1();

void Praktika_6() {
	int taskNumber = -1;

	while (taskNumber != 0) {
		printf("Enter the task number (0 to exit) => ");
		scanf_s("%i", &taskNumber);
		switch (taskNumber) {
		case 1:
			Task_6_1();
			break;
		}
	}
}

void Task_6_1() {
	int a = 0;
	int matrix[arrayLength][arrayLength];
	srand(time(NULL));

	for (unsigned int i = 0; i < arrayLength; i++) {
		for (unsigned int j = 0; j < arrayLength; j++) {
			matrix[i][j] = rand() % (randMax - randMin + 1) + randMin;
			printf("%4i", matrix[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");

	for (unsigned int i = 0; i <= (arrayLength - 1) / 2; i++) {
		for (unsigned int j = i + 1; j < arrayLength - i - 1; j++) {
			int buffer;

			buffer = matrix[i][j];
			matrix[i][j] = matrix[arrayLength - i - 1][j];
			matrix[arrayLength - i - 1][j] = buffer;
		}
	}

	for (unsigned int i = 0; i < arrayLength; i++) {
		for (unsigned int j = 0; j < arrayLength; j++) {
			printf("%4i", matrix[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");
}