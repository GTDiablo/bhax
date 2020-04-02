#include <stdio.h>

int main()
{
	int a=3;
	int b=8;
	printf("Eredeti ertekek:");
	printf("\na=%d", a);
	printf("\nb=%d", b);

        a = a+b;    //a=3+8=11
        b = a-b;    //b=11-8=3
        a = a-b;    //a=11-3=8

	printf("\nMegvaltoztatott ertekek:");
	printf("\na=%d", a);
	printf("\nb=%d", b);
	printf("\n");
	return 0;
}
