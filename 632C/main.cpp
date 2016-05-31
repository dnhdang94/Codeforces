/*
 * main.cpp
 *
 *  Created on: May 31, 2016
 *      Author: dnhdang94
 */
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;


int n;
string s[50100];


int cmp(string a, string b)
{
	return a + b < b + a;
}

int main(int argc, char **argv)
{
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s[i];
	}
	sort(s, s + n, cmp);
	for (int i = 0; i < n; i++) {
		cout << s[i];
	}
	return 0;
}
