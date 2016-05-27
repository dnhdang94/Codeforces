/*
 * main.c
 *
 *  Created on: May 8, 2016
 *      Author: dnhdang94
 */
#include <stdio.h>


int main(int argc, char **argv)
{
	int hh, mm;
	int a;
	scanf("%d:%d", &hh, &mm);
	scanf("%d", &a);
	hh = (hh + (mm + a) / 60) % 24;
	mm = (mm + a) % 60;
	printf("%02d:%02d", hh, mm);
	return 0;
}
