#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "Praktika_12.h"
#include "myfunc.h"

#define arrayLength 10
#define randMin -10
#define randMax 10

void Task_12_1();

void Praktika_12() {
	int taskNumber = -1;

	while (taskNumber != 0) {
		printf("Enter the task number (0 to exit) => ");
		scanf_s("%i", &taskNumber);
		switch (taskNumber) {
		case 1:
			Task_12_1();
			break;
		}
	}
}

void Task_12_1() {

}