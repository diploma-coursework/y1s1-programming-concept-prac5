#include <stdio.h>
#include <math.h>

int main() {
	const double PI = 3.14159;
	double angleDegree;

	printf("Enter an angle in degree: ");
	scanf("%lf", &angleDegree);

	double angleRadian = angleDegree * PI / 180.0;

	double sinAngle = sin(angleRadian) * 180.0 / PI;
	double cosAngle = cos(angleRadian) * 180.0 / PI;
	double tanAngle = tan(angleRadian) * 180.0 / PI;

	printf(
		"\n"
		"sin (x) = %f\n"
		"cos (x) = %f\n"
		"tan (x) = %f\n",
		sinAngle, cosAngle, tanAngle
	);
}