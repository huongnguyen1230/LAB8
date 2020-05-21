#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int ary[5] = {34, 45, 56, 67, 89};
	int num;
		printf ("mang dao nguoc cua day so:\n");
		
	for (num = 4; num >= 0; num--)
	{
		printf ("%d\n", ary[num]);
	}
	return 0;

}
