#include <stdio.h>
#include <stdlib.h>
#include "information.h"

void main()
{
	Person P;

	printf("Please input your name:");
		scanf_s("%s",&P.name,8);
	printf("Please input your gender (0 for woman, 1for man):");
		scanf_s("%d", &P.gend);
	printf("Please input your age:");
		scanf_s("%d", &P.age);

	printf("\nHi! %s, ", P.name);
	if (P.gend == 0)
		printf("You are a %d-yaer-old woman.\n", P.age);
	else
		printf("You are a %d-yaer-old man.\n",P.age);

		system("pause");
}