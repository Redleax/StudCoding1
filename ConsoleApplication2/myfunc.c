#include <stdio.h>
#include <math.h>
#include "myfunc.h"

double H(double a, double b, double c) { //—читаетс€ высота опирающа€с€ на сторону A
	double H, p;
	p = (a + b + c) / 2;
	H = 2 * (sqrt(p * (p - a) * (p - b) * (p - c))) / a;
	return H;
}

char ReadChar() {
	char ch;
	while ((getchar()) != '\n');
	ch = getchar();
	return ch;
}

void stdIN_Clear() {
	char ch;
	while ((getchar()) != '\n');
}