#include <stdio.h>
#include <math.h>


double* quadRoot(double a, double b, double c);

int main()
{
	 double n[2];
	 double *t = quadRoot(1,0,4);

	printf("%f.2\n", t[0]); 
}

double* quadRoot(double a, double b, double c)
{
	/* -b +- sqrt(b^2 -4ac)/ 2*a */
	
	double n[2];

	n[0] = -b + sqrt(((b*b) - (4 * (a * c))) / 2 * a);
	n[1] = -b - sqrt(((b*b) - (4 * (a * c))) / 2 * a);

	return n;
}
