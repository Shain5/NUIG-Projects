#include "pch.h"
#include <iostream>
#include "stdio.h"
int main()
{
	double Numbers[11], sum = 0, average = 0, min = 999999999, max = 0;
	int s;
	printf("Program to calculate average, min ,max of up to ten floating poit numbers \n");
	printf("Enter up to 10 numbers <0.0 to end input>\n");
	printf("_________________\n");

	for (s = 0; s < 10; s++)
	{
		printf(" #%d:", s + 1);
		scanf_s("%lf", &Numbers[s]);
		sum += Numbers[s];
		if (s == 1)
		{
			max = Numbers[s];
			min = Numbers[s];
		}

		if (Numbers[s] < min)
		{
			min = Numbers[s];
		}
		if (Numbers[s] > max)
		{
			max = Numbers[s];
		}
		if (Numbers[s] == 0)
		{
			break;
		}
	}
	average = sum / (s);
	printf("Average = %.2lf, Max=%.2lf, Min= %.2lf", average, max, min);

}