#include <stdio.h>

int 
main()
{
	int a, db=0;
	printf("Adjon meg egy decimalis szamot!\n");
	scanf("%d", &a);
	printf("A megadott szam unarisba atvaltva:\n");
	for (int i = 0; i < a; i++)
	{
		printf("|");
		db++;
		if (db % 5 == 0) 
                {
                	printf(" ");
                }
	}
	printf("\n");
	return 0;
}

