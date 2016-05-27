/*
 * main.c
 *
 *  Created on: May 27, 2016
 *      Author: root
 */
#include <stdio.h>


int main(int argc, char **argv)
{
	int n;
	unsigned long long res = 1;
	scanf("%d", &n);
	res <<= (n + 1);
	printf("%llu", (res - 2));
	return 0;
}
