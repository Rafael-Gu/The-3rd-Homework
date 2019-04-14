#include <stdio.h>
#include <cmath>

float jisuan(float x)
{
	if (isnan(x))
		return 0;
	if (isinf(x))
		return 0;
	if (x < 1000)
		return 0;
	else if (x < 5000) 
		return (x - 1000)*0.05;
	else if (x < 10000)
		return 200 + (x - 5000)*0.08;
	else 
		return 600 + (x - 10000)*0.1;
}

int main()
{
	float x;
	scanf_s("%f", &x);
	if (x < 1000)printf("0\n");
	else if (x < 5000) printf("%.2f\n", (x - 1000)*0.05);
	else if (x < 10000)printf("%.2f\n", 200 + (x - 5000)*0.08);
	else printf("%.2f\n", 600 + (x - 10000)*0.1);
		return 0;
}
