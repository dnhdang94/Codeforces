/*
 * main.c
 *
 *  Created on: May 23, 2016
 *      Author: dnhdang94
 */
#include <stdio.h>

int n;
int count = 0;
char a[300];

int main(int argc, char **argv) {
	scanf("%d\n", &n);
	for (int i = 0; i < n; i++) {
		scanf("%c", &a[i]);
		if (a[i] == 'X')
			count++;
	}
	printf("%d\n", abs(n / 2 - count));
	if (count > n / 2) {
		for (int i = 0; i < n; i++) {
			if (count == n / 2) {
				printf("%c", a[i]);
				continue;
			}
			if (a[i] == 'X') {
				printf("x");
				count--;
			} else
				printf("%c", a[i]);
		}
	} else if (count < n / 2) {
		for (int i = 0; i < n; i++) {
			if (count == n / 2) {
				printf("%c", a[i]);
				continue;
			}
			if (a[i] == 'x') {
				printf("X");
				count++;
			} else
				printf("%c", a[i]);
		}
	} else
		for (int i = 0; i < n; i++)
			printf("%c", a[i]);
	return 0;
}
