#include <stdio.h>

int main()
{
	int a=3;    //a=0011
	int b=8;    //b=1000
	printf("Eredeti ertekek:");
	printf("\na=%d", a);
	printf("\nb=%d", b);

	a=a^b;  //a=0011^1000=1011
	b=a^b;  //b=1011^1000=0011
	a=a^b;  //a=1011^0011=1000

	printf("\nMegvaltoztatott ertekek:");
	printf("\na=%d", a);
	printf("\nb=%d", b);
	printf("\n");
	return 0;
}
