#include <stdio.h>
#include "Praktika_01.h"
#include "Praktika_02.h"
#include "Praktika_03.h"
#include "Praktika_04.h"
#include "Praktika_05.h"
#include "Praktika_06.h"
#include "Praktika_07.h"
#include "Praktika_08.h"
#include "Praktika_09.h"
#include "Praktika_10.h"
#include "Praktika_11.h"
#include "Praktika_12.h"
#include "Praktika_13.h"
#include "Praktika_14.h"
#include "Praktika_15.h"

void main() {
	int PracticeNumber = -1;
	
	while (PracticeNumber != 0) {
		printf("Enter the practical work number (0 to exit) => ");
		scanf_s("%i", &PracticeNumber);
		switch (PracticeNumber) {
		case 1:
			Praktika_1();
			break;
		case 2:
			Praktika_2();
			break;
		case 3:
			Praktika_3();
			break;
		case 4:
			Praktika_4();
			break;
		case 5:
			Praktika_5();
			break;
		case 6:
			Praktika_6();
			break;
		case 7:
			Praktika_7();
			break;
		case 8:
			Praktika_8();
			break;
		case 9:
			Praktika_9();
			break;
		case 10:
			Praktika_10();
			break;
		case 11:
			Praktika_11();
			break;
		case 12:
			Praktika_12();
			break;
		case 13:
			Praktika_13();
			break;
		case 14:
			Praktika_14();
			break;
		case 15:
			Praktika_15();
			break;
		}

		system("cls");
	}
}