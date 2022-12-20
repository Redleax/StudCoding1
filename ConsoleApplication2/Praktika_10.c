#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "Praktika_10.h"
#include "myfunc.h"

#define randMin -10
#define randMax 10

//Task 1
#define Task_1_n 8
#define Task_1_m 11

//Task 2
#define Task_2_n 6

//Task 3
#define Task_3_n 10

//Task 4
#define Task_4_nx 2
#define Task_4_mx 3
#define Task_4_ny 4
#define Task_4_my 5

void Task_10_1();
void Task_10_2();
void Task_10_3();
void Task_10_4();

void Praktika_10() {
	int taskNumber = -1;

	while (taskNumber != 0) {
		printf("Enter the task number (0 to exit) => ");
		scanf_s("%i", &taskNumber);
		switch (taskNumber) {
		case 1:
			Task_10_1();
			break;
		case 2:
			Task_10_2();
			break;
		case 3:
			Task_10_3();
			break;
		case 4:
			Task_10_4();
			break;
		}
	}
}

void Task_10_1() {
	srand(time(NULL));
	int Task_1_MainMatrix[Task_1_n][Task_1_m] = {0};
	int Task_1_AdditionalMatrix[Task_1_m] = { 0 };

	printf("\n");

	for (int i = 0; i < Task_1_n; i++) {
		for (int j = 0; j < Task_1_m; j++) {
			Task_1_MainMatrix[i][j] = rand() % (randMax - randMin + 1) + randMin;
			printf("%3i", Task_1_MainMatrix[i][j]);
		}
		printf("\n");
	}

	printf("\n");

	for (int i = 0; i < Task_1_m; i++) {
		Task_1_AdditionalMatrix[i] = rand() % (randMax - randMin + 1) + randMin;
		printf("%3i", Task_1_AdditionalMatrix[i]);
	}

	printf("\n");

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < Task_1_m; j++) {
			Task_1_MainMatrix[i][j] = Task_1_AdditionalMatrix[j];
		}
	}

	printf("\n");

	for (int i = 0; i < Task_1_n; i++) {
		for (int j = 0; j < Task_1_m; j++) {
			printf("%3i", Task_1_MainMatrix[i][j]);
		}
		printf("\n");
	}

	printf("\n");
}

void Task_10_2() {
	srand(time(NULL));
	int Task_2_MainMatrix[Task_2_n][Task_2_n] = { 0 };
	int Product = 1, NegativesCount = 0;

	printf("\n");

	for (int i = 0; i < Task_2_n; i++) {
		for (int j = 0; j < Task_2_n; j++) {
			Task_2_MainMatrix[i][j] = rand() % (randMax - randMin + 1) + randMin;
			printf("%3i", Task_2_MainMatrix[i][j]);
		}
		printf("\n");
	}

	printf("\n");

	for (int i = 1; i < Task_2_n; i++) {
		if (Task_2_MainMatrix[Task_2_n - i][i] < 0) {
			Product = Product * Task_2_MainMatrix[Task_2_n - i][i];
			NegativesCount++;
			
			//printf("Stroke - %3i Stolbets - %3i Element - %3i\n", Task_2_n - i + 1, i + 1, Task_2_MainArray[Task_2_n - i][i]);		//Uncomment to debug
		}
	}

	if (NegativesCount > 0) {
		printf("Geometric mean --> %6.3lf\n\n", pow(Product, 1.0 / NegativesCount));
	}
	else {
		printf("There is no negative numbers\n\n");
	}
}

void Task_10_3() {
	srand(time(NULL));
	int Task_3_MainMatrix[Task_3_n][Task_3_n] = { 0 };
	int DesiredNumber, CountOfCoinsidences = 0;

	printf("\n");

	for (int i = 0; i < Task_3_n; i++) {
		for (int j = 0; j < Task_3_n; j++) {
			Task_3_MainMatrix[i][j] = rand() % (randMax - randMin + 1) + randMin;
			printf("%3i", Task_3_MainMatrix[i][j]);
		}
		printf("\n");
	}

	printf("\n");

	DesiredNumber = rand() % (randMax - randMin + 1) + randMin;
	printf("Desired number --> %2i", DesiredNumber);

	printf("\n");

	for (int i = 0; i < Task_3_n - 1; i++) {
		for (int j = 0; j < Task_3_n - i - 1; j++) {
			if (Task_3_MainMatrix[i][j] == DesiredNumber) {
				CountOfCoinsidences++;
			}
		}
	}

	printf("Count of %i numbers --> %i\n\n", DesiredNumber, CountOfCoinsidences);
}

void Task_10_4() {
	srand(time(NULL));
	int Task_4_XMatrix[Task_4_nx][Task_4_mx] = { 0 };
	int Task_4_YMatrix[Task_4_ny][Task_4_my] = { 0 };
	int Task_4_ZMatrix[Task_4_nx + Task_4_ny][Task_4_mx + Task_4_my] = { 0 };

	printf("\nMatrix X:\n\n");

	for (int i = 0; i < Task_4_nx; i++) {
		for (int j = 0; j < Task_4_mx; j++) {
			Task_4_XMatrix[i][j] = rand() % (randMax - randMin + 1) + randMin;
			printf("%3i", Task_4_XMatrix[i][j]);
		}
		printf("\n");
	}

	printf("\nMatrix y:\n\n");
	
	for (int i = 0; i < Task_4_ny; i++) {
		for (int j = 0; j < Task_4_my; j++) {
			Task_4_YMatrix[i][j] = rand() % (randMax - randMin + 1) + randMin;
			printf("%3i", Task_4_YMatrix[i][j]);
		}
		printf("\n");
	}

	printf("\n");

	for (int i = 0; i < Task_4_nx + Task_4_ny; i++) {
		if (i < Task_4_ny) {
			for (int j = Task_4_mx; j < Task_4_mx + Task_4_my; j++) {
				Task_4_ZMatrix[i][j] = Task_4_YMatrix[i][j - Task_4_mx];
			}
		}
		else {
			for (int j = 0; j < Task_4_mx; j++) {
				Task_4_ZMatrix[i][j] = Task_4_XMatrix[i - Task_4_ny][j];
			}
		}
	}

	printf("Matrix Z:\n\n");

	for (int i = 0; i < Task_4_nx + Task_4_ny; i++) {
		for (int j = 0; j < Task_4_mx + Task_4_my; j++) {
			printf("%3i", Task_4_ZMatrix[i][j]);
		}
		printf("\n");
	}

	printf("\n");
}