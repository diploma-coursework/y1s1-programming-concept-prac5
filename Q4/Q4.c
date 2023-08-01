#include <ctype.h>
#include <stdio.h>

int main() {
	char char1 = 'm';
	char char2 = 'G';
	char char3 = '3';
	char char4 = '%';

	printf("toupper(%c) = %c\n", char1, toupper(char1));
	printf("toupper(%c) = %c\n", char2, toupper(char2));
	printf("toupper(%c) = %c\n", char3, toupper(char3));
	printf("toupper(%c) = %c\n", char4, toupper(char4));
}