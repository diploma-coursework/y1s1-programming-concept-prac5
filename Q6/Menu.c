#include <stdio.h>

int menu() {
	int choice = 0;

	printf(
		"Select your fastfood of choice:\n"
		"1 - KFC\n"
		"2 - McDonalds\n"
		"3 - Pizza Hut\n\n"
	);
	scanf("%d", &choice);

	return choice;
}