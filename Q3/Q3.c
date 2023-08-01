#include <stdio.h>
#include <math.h>

struct Coordinate {
	double x;
	double y;
};

int main() {
	struct Coordinate coords1 = { 0 , 0 };
	struct Coordinate coords2 = { 0, 0 };

	printf("Enter coordinate 1 (x y): ");
	scanf("%lf %lf", &coords1.x, &coords1.y);

	printf("Enter coordinate 2 (x y): ");
	scanf("%lf %lf", &coords2.x, &coords2.y);

	double distance = sqrt(pow(coords1.x - coords2.x, 2.0) + pow(coords1.y, coords2.y, 2.0));
	printf("The distance between the 2 points is %f units.", distance);
}