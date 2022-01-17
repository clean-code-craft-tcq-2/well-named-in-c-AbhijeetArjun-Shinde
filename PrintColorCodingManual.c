#include <stdio.h>
#include "GetColorByPairNumber.h"
#include "GetPairNumberByColor.h"
#include "PrintColorCodingManual.h"

void ColorCodingManual()
{
	printf("\t 25 Pair Color Coding Manual \t");
	printf(" \n Format: MajorColor MinorColor & Pair Number\n");
	int pairNumber = 1 ;
	while (pairNumber <= 25)
	{
		ColorPair colorPair = GetColorFromPairNumber(pairNumber);
		char colorPairNames[MAX_COLORPAIR_NAME_CHARS];
		ColorPairToString(&colorPair, colorPairNames);
		printf("%s --> %d\n", colorPairNames, pairNumber);
    pairNumber++
	}
}
