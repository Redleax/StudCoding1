#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "Praktika_9.h"
#include "myfunc.h"

#define arrayLength 10
#define randMin -10
#define randMax 10

void Task_9_1();
int* negativeDelete(int* Array, int* realArrayLength);
int* remove_element(int* Array, int realArrayLength, int indexToRemove);

void Praktika_9() {
	int taskNumber = -1;

	while (taskNumber != 0) {
		printf("Enter the task number (0 to exit) => ");
		scanf_s("%i", &taskNumber);
		switch (taskNumber) {
		case 1:
			Task_9_1();
			break;
		}
	}
}

void Task_9_1() {
	int realArrayLength = arrayLength;
	int* Array = (int*)malloc(realArrayLength * sizeof(int));
	
	srand(time(NULL));
	printf("\n");

	printf("Original array -->");
	for (int* currentNumber = Array; currentNumber < Array + realArrayLength; currentNumber++) {
		*currentNumber = rand() % (randMax - randMin + 1) + randMin;
		printf("%4i", *currentNumber);
	}

	printf("\n");
	Array = negativeDelete(Array, &realArrayLength);

	printf("Modified array -->");
	for (int i = 0; i < realArrayLength; i++) {
		printf("%4i", Array[i]);
	}

	printf("\n\n");
}

int* negativeDelete(int* Array, int* realArrayLength) {
	for (int i = *realArrayLength - 1; i >= 0; i--) {
		if (Array[i] < 0) {
			Array = remove_element(Array, *realArrayLength, i);
			--* realArrayLength;
		}
	}
	printf("\n\n");

	return Array;
}

int* remove_element(int* Array, int realArrayLength, int indexToRemove) {
	int* temp = malloc((realArrayLength - 1) * sizeof(int));

	if (indexToRemove != 0)
		memcpy(temp, Array, indexToRemove * sizeof(int));

	if (indexToRemove != (realArrayLength - 1))
		memcpy(temp + indexToRemove, Array + indexToRemove + 1, (realArrayLength - indexToRemove - 1) * sizeof(int));

	free(Array);
	return temp;
}