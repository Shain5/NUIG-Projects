#include <stdio.h>
#include "pch.h"

int main()
{

	int EnglishMark, IrishMark, MathsMark, FrenchMark, ScienceMark;




	printf("ENTER EnglishMark");
	scanf_s("%d", &EnglishMark);

	printf("ENTER IrishMark");
	scanf_s("%d", &IrishMark);

	printf("ENTER MathsMark");
	scanf_s("%d", &MathsMark);

	printf("ENTER FrenchMark");
	scanf_s("%d", &FrenchMark);

	printf("ENTER ScienceMark");
	scanf_s("%d", &ScienceMark);

	float averageMark = ((float)EnglishMark + (float)IrishMark + (float)MathsMark + (float)FrenchMark + (float)ScienceMark) / 5;
	printf("YOUR averageMark was %.2f\n", averageMark);

	printf("Passes: ");

	if (EnglishMark >= 40) { printf("English "); }
	if (IrishMark >= 40) { printf("Iish "); }
	if (MathsMark >= 40) { printf("maths "); }
	if (FrenchMark >= 40) { printf("French "); }
	if (ScienceMark >= 40) { printf("Science "); }
	printf("\n");

	printf("Fails: ");

	if (EnglishMark < 40) { printf("English "); }

	if (IrishMark < 40) { printf("Iish "); }

	if (MathsMark < 40) { printf("maths "); }

	if (FrenchMark < 40) { printf("French "); }

	if (ScienceMark < 40) { printf("Science "); }






	return 0;
}