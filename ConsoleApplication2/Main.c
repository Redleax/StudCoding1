#include <stdio.h>
#include "Praktika_1.h"
#include "Praktika_2.h"
#include "Praktika_3.h"
#include "Praktika_4.h"
#include "Praktika_5.h"
#include "Praktika_6.h"
#include "Praktika_7.h"
#include "Praktika_8.h"
#include "Praktika_9.h"

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
		}

		system("cls");
	}
}