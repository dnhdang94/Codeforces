/*
 * main.c
 *
 *  Created on: May 10, 2016
 *      Author: dnhdang94
 */
#include <stdio.h>


int n;
float a[180][180], b[180][180], w[180][180];

#define fore(i, n) for (i = 0; i < n; i++)
#define forlr(i, l, r) for (i = l; i < r; i++)


int main(int argc, char **argv)
{
	int i, j;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++)
			scanf("%f", &w[i][j]);
	}

	fore(i, n) {
		a[i][i] = w[i][i];
		b[i][i] = 0;
		forlr(j, i + 1, n) {
			a[i][j] = (w[i][j] + w[j][i]) / 2;
			a[j][i] = a[i][j];
			b[i][j] = w[i][j] - a[i][j];
			b[j][i] = -b[i][j];
		}
	}
	fore(i, n) {
		fore(j, n - 1)
			printf("%f ", a[i][j]);
		printf("%f", a[i][n - 1]);
		printf("\n");
	}
	fore(i, n) {
		fore(j, n - 1)
			printf("%f ", b[i][j]);
		printf("%f", b[i][n - 1]);
		printf("\n");
	}
}
