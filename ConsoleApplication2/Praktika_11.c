#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "Praktika_11.h"
#include "myfunc.h"

#define matrixWidth 5
#define matrixLength 10
#define randMin -25
#define randMax 25

void Task_11_1();

void Praktika_11() {
	int taskNumber = -1;

	while (taskNumber != 0) {
		printf("Enter the task number (0 to exit) => ");
		scanf_s("%i", &taskNumber);
		switch (taskNumber) {
		case 1:
			Task_11_1();
			break;
		}
	}
}

void Task_11_1() {
    int** matrixA, ** matrixB, ** matrixOfMaxElements, ** matrixOfMinElements;

    srand(time(NULL));

    matrixA = (int**)malloc(matrixWidth * sizeof(int*));
    matrixB = (int**)malloc(matrixWidth * sizeof(int*));
    matrixOfMaxElements = (int**)malloc(matrixWidth * sizeof(int*));
    matrixOfMinElements = (int**)malloc(matrixWidth * sizeof(int*));

    for (int i = 0; i < matrixWidth; i++) {
        matrixA[i] = (int*)malloc(matrixLength * sizeof(int));
        matrixB[i] = (int*)malloc(matrixLength * sizeof(int));
        matrixOfMaxElements[i] = (int*)malloc(matrixLength * sizeof(int));
        matrixOfMinElements[i] = (int*)malloc(matrixLength * sizeof(int));
        for (int j = 0; j < matrixLength; j++) {
            matrixA[i][j] = rand() % (randMax - randMin + 1) + randMin;
            matrixB[i][j] = rand() % (randMax - randMin + 1) + randMin;
            matrixOfMaxElements[i][j] = max(matrixA[i][j], matrixB[i][j]);
            matrixOfMinElements[i][j] = min(matrixA[i][j], matrixB[i][j]);
        }
    }

    printf("\nMatrix A:\n");

    for (int i = 0; i < matrixWidth; i++) {
        for (int j = 0; j < matrixLength; j++) {
            printf("%3i ", matrixA[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix B:\n");

    for (int i = 0; i < matrixWidth; i++) {
        for (int j = 0; j < matrixLength; j++) {
            printf("%3i ", matrixB[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix of max elements:\n");
    for (int i = 0; i < matrixWidth; i++) {
        for (int j = 0; j < matrixLength; j++) {
            printf("%3i ", matrixOfMaxElements[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix of min elements:\n");

    for (int i = 0; i < matrixWidth; i++) {
        for (int j = 0; j < matrixLength; j++) {
            printf("%3i ", matrixOfMinElements[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < matrixWidth; i++) {
        free(matrixA[i]);
        free(matrixB[i]);
        free(matrixOfMaxElements[i]);
        free(matrixOfMinElements[i]);
    }

    free(matrixA);
    free(matrixB);
    free(matrixOfMaxElements);
    free(matrixOfMinElements);
}