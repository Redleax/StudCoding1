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
    char* str, * answ;
    int numberOfWord, strLength, spaceFlag = 0, wordsCount = 0;
    int* wordBegining, * wordEnding;

    wordBegining = (int*)malloc(sizeof(int));
    wordEnding = (int*)malloc(sizeof(int));
    str = (char*)malloc(101 * sizeof(char));

    stdIN_Clear();
    printf("Enter line(max 100 symbols): ");
    gets(str);

    printf("\nEnter number of word: ");
    scanf_s("%i", &numberOfWord);

    strLength = strlen(str);

    for (int i = 0; i < strLength; i++) {
        if (spaceFlag == 0) {
            if (!isspace(str[i])) {
                spaceFlag = 1;
                wordsCount += 1;
                wordBegining = (int*)realloc(wordBegining, wordsCount * sizeof(int));
                wordEnding = (int*)realloc(wordEnding, wordsCount * sizeof(int));
                wordBegining[wordsCount - 1] = i;
            }
        }
        else {
            if (isspace(str[i])) {
                spaceFlag = 0;
            }
            wordEnding[wordsCount - 1] = i + 1;
        }
    }

    if (wordEnding[wordsCount - 1] == strLength - 1) {
        wordEnding[wordsCount - 1] = strLength;
    }

    if (wordsCount < numberOfWord) {
        printf("\nNot enough words in line!");
        free(str);
        free(wordEnding);
        free(wordBegining);
        return 0;
    }

    answ = (char*)malloc((strLength - (wordEnding[numberOfWord - 1] - wordBegining[numberOfWord - 1]) + 1) * sizeof(char));
    for (int i = 0; i < (strLength - (wordEnding[numberOfWord - 1] - wordBegining[numberOfWord - 1]) + 1); i++) {
        if (i < wordBegining[numberOfWord - 1]) {
            answ[i] = str[i];
        }
        else if (numberOfWord != wordsCount) {
            answ[i] = str[i - wordBegining[numberOfWord - 1] + wordEnding[numberOfWord - 1]];
        }
        else {
            answ[i] = '\0';
        }
    }

    printf("\n");
    puts(answ);
    free(answ);
    free(str);
    free(wordEnding);
    free(wordBegining);

    return 0;
}