#include <stdio.h>
#include <math.h>
#include "Praktika_6.h"
#include "myfunc.h"

#define arrayLength 100//Кол-во жлементов в массиве
#define randMin -100
#define randMax 100

void Task_6_1();

void Praktika_5() {
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

}