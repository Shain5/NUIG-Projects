
#include "stdafx.h"
#include <stdio.h>

#define M_PI 3.14159
#define Triangle 1
#define Square 2
#define Rectangle 3
#define parallelogram 4
#define Trapezoid 5
#define Circle 6
#define Ellipse 7
#define Sector 8


int main()
{


	int choice = 0;
	int s = 0;
	float base = 0;
	float height = 0;
	float width = 0;
	float lenght = 0;
	float topwidth = 0;
	float radius = 0;
	float minorRadius = 0;
	float area = 0;
	float angleRadians = 0;
	float circumference = 0;
	float majorRadius = 0;
	int check = 1;
	while (check == 1)

	{
		printf("AREA CALCULATOR \n");
		printf("ENTER CHOICE: \n");
		printf("1<Triangle\n 2<Square>\n 3<Rectangle\n 4<Parallelogram>\n 5<Trapezoid>\n 6<Circle>\n 7<Ellipse>\n 8<Sector>\n ");
		printf("Choice: ");
		scanf_s("%d", &choice);


		switch (choice)

		{
		case 1:
			printf("ENTER THE BASE WITDH: ");
			scanf_s("%f", &base);
			printf("ENTER THE VERTICAL HEIGHT");
			scanf_s("%f", &height);

			area = 0.5*base*height;

			printf("AREA: %.2f", area);



			break;

		case 2:
			printf("ENTER THE LENGTH OF A SIDE");
			scanf_s("%f", &lenght);


			area = lenght*lenght;

			printf("AREA: %.2f", area);


			printf("AREA: %.2f", area);




			break;

		case 3:
			printf("ENTER THE BASE WIDTH");
			scanf_s("%f", &width);
			printf("ENTER THE VERTICAL HEIGHT");
			scanf_s("%f", &height);

			area = width*height;

			printf("AREA: %.2f", area);

			printf("AREA: %.2f", area);



			break;

		case 4:
			printf("ENTER THE BASE WIDTH");
			scanf_s("%f", &width);
			printf("ENTER THE VERTICAL HEIGHT");
			scanf_s("%f", &height);

			area = base*height;


			printf("AREA: %.2f", area);


			printf("AREA: %.2f", area);


			break;

		case 5:
			printf("ENTER THE BASE WIDTH");
			scanf_s("%f", &width);
			printf("ENTER THE TOP WIDTH");
			scanf_s("%f", &topwidth);
			printf("ENTER THE VERTICAL HEIGHT");
			scanf_s("%f", &height);

			area = .5*(width + topwidth)*height;


			printf("AREA: %.2f", area);

			printf("AREA: %.2f", area);



			break;


		case 6:
			printf("ENTER THE RADIUS");
			scanf_s("%f", &radius);

			area = radius * radius * M_PI;
			printf("AREA: %.2f", area);

			circumference = M_PI * (2) * (radius);
			printf("CIRCUMFERENCE: %.2f", circumference);

			printf("AREA: %.2f", area);



			break;



		case 7:
			printf("ENTER THE MAJOR RADIUS");
			scanf_s("%f", &majorRadius);
			printf("ENTER THE MINOR RADIUS");
			scanf_s("%f", &minorRadius);

			area = M_PI*minorRadius*majorRadius;
			printf("AREA: %.2f", &area);

			printf("AREA: %.2f", area);



			break;


		case 8:
			printf("ENTER THE RADIUS");
			scanf_s("%f", &radius);
			printf("ENTER THE ANGLE IN RADIANS");
			scanf_s("%f", &angleRadians);

			area = 0.5*radius*radius*angleRadians;

			printf("AREA: %.2f", &area);

			printf("AREA: %.2f", area);



			break;
		}






		printf("WOULD YOU LIKE TO CHOOSE AN ANOTHER SHAPE? 1=YES  0=NO");
		scanf_s("%d", &check);
	}
	return 0;
}

