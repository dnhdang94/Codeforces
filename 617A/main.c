/*
 * main.c
 *
 *  Created on: May 31, 2016
 *      Author: dnhdang94
 */
#include <stdio.h>


int main(int argc, char **argv)
{
	int n;
	int step = 0;
	scanf("%d", &n);
	if (n >= 5) {
		step = step + (n / 5);
		n = n % 5;
	}
	if (n >= 4) {
		step = step + (n / 4);
		n = n % 4;
	}
	if (n >= 3) {
		step = step + (n / 3);
		n = n % 3;
	}
	if (n >= 2) {
		step = step + (n / 2);
		n = n % 2;
	}
	if (n >= 1) {
		step = step + (n / 1);
		n = n - 1;
	}
	printf("%d", step);
	return 0;
}
