#include<stdio.h>
#include<math.h>
double a, b, avr, i, count = 0, sum = 0, sd, x, y = 0, z, sR;
int main()
{
	scanf("%lf %lf", &a, &b);
	if (b > a)
	{
		for (i = a; i <= b; i++)
		{
			printf("%.0lf ", i);
			x = i * i;
			y += x;
			sum += i;
			count++;
		}
	}
	else
	{
		for (i = a; i >= b; i--)
		{
			printf("%.0lf ", i);
			x = i * i;
			y += x;
			sum += i;
			count++;
		}
	}
	printf("\n");
	avr = sum / count;
	z = sum * sum;
	sd = ((count * y) - z) / (count * (count - 1));
	sR = sqrt(sd);
	printf("Average = %.1lf\n", avr);
	printf("SD = %.2lf\n", sR);
}