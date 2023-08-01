#include <stdio.h>
#include <math.h>

int main() {
	double x, y;

	printf("Enter 2 numbers: ");
	scanf("%lf %lf", &x, &y);

	double ans1 = sqrt(x * y);
	double ans2 = sqrt(x) * sqrt(y);
	double ans3 = pow(x, y);
	double ans4 = pow(y, x);
	double ans5 = log10(pow(x, y));

	printf(
		"\n"
		"Answers are:\n"
		"a) %f\n"
		"b) %f\n"
		"c) %f\n"
		"d) %f\n"
		"e) %f\n"
		 ,ans1, ans2, ans3, ans4, ans5
	);
}