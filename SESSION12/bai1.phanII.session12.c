#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num[5];
	int i;
	num[0] = 1;
	num[1] = 2;
	num[2] = 3;
	num[3] = 4;
	num[4] = 5;
	for (i = 0; i< 5; i++)
		printf ("nhap gia tri cua mang [%d] la %d \n", i, num[i]);
		
	for (i=4; i>=0; i--)
	{
		printf ("gia tri dao nguoc cua mang [%d] la %d \n", i, num[i]);
		
	
	}
		
	return 0;
}
