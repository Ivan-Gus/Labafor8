#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#define _USE_MATH_DEFINES 
#define _CRT_SECURE_NO_DEPRECATE 

int main() {
	setlocale(LC_CTYPE, "RUS");
	double N;
	double res, b;
	int zn;
	b = 1;
	res = 0;
	zn = 1;
	puts("введите целое число N (N<10): ");
	scanf("%lf", &N);
	if (N >= 10 || N <= 0) {
		printf("\n Неправильное N\n");
	}
	else {
		for (int i = 1; i <= N; i++) {
			res += zn * (b + i * 0.1 );
			zn = -zn;
		}
	}
	printf("Результат выражения %.1lf", res);
	return 0;
}