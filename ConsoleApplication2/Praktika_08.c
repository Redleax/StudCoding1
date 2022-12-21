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
        //пункт 1
        int** Matrix;
        int n, * Array;

        srand(time(NULL));

        n = rand() % 10 + 1;
        Matrix = (int**)malloc(n * sizeof(int*));
        Array = (int*)malloc(n * sizeof(int));

        for (int i = 0; i < n; i++) {  
            Array[i] = rand() % 10 + 1;
            Matrix[i] = (int*)malloc(Array[i] * sizeof(int));
            for (int j = 0; j < Array[i]; j++) {
                Matrix[i][j] = rand() % (randMax - randMin + 1) + randMin;
            }
        }

        printf("Martix:\n");

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < Array[i]; j++) {
                printf("%4d", Matrix[i][j]);
            }
            printf("\n");
            free(Matrix[i]);
        }

        free(Matrix);
        free(Array);

        //пункт 2-6
        int* arrayA, * arrayB;
        arrayA = (int*)calloc(100, sizeof(int));
        arrayB = (int*)malloc(100 * sizeof(int));

        printf("\n\n");

        printf("\n\nAdress of array A: %p \nAddress of array B: %p \nA:\n", &arrayA, &arrayB);

        for (int i = 0; i < 100; i++) {
            printf("%3d", arrayA[i]);
        }

        printf("\nB:\n");

        for (int i = 0; i < 100; i++) {
            printf("%3d", arrayB[i]);
        }

        arrayA = (int*)realloc(arrayA, 200 * sizeof(int));
        arrayB = (int*)realloc(arrayB, 50 * sizeof(int));

        printf("\n\nAdress of array A: %p \nAddress of array B: %p \nA:\n", &arrayA, &arrayB);

        for (int i = 0; i < 200; i++) {
            printf("%3d", arrayA[i]);
        }

        printf("\nB:\n");

        for (int i = 0; i < 50; i++) {
            printf("%3d", arrayB[i]);
        }

        arrayA = (int*)realloc(arrayA, 50 * sizeof(int));
        arrayB = (int*)realloc(arrayB, 200 * sizeof(int));

        printf("\n\nAdress of array A: %p \nAddress of array B: %p \nA:\n", &arrayA, &arrayB);

        for (int i = 0; i < 50; i++) {
            printf("%3d", arrayA[i]);
        }

        printf("\nB:\n");

        for (int i = 0; i < 200; i++) {
            printf("%3d", arrayB[i]);
        }

        free(arrayA);
        free(arrayB);
}