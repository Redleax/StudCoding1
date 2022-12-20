#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "Praktika_08.h"
#include "myfunc.h"

#define arrayLength 50
#define randMin -100
#define randMax 100

void Task_8_1();

void Praktika_8() {
	int taskNumber = -1;

	while (taskNumber != 0) {
		printf("Enter the task number (0 to exit) => ");
		scanf_s("%i", &taskNumber);
		switch (taskNumber) {
		case 1:
			Task_8_1();
			break;
		}
	}
}

void Task_8_1() {
	
}