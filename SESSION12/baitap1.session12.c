#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int ary [5];
	int min, max;
	int i;
	for (i=0; i<5; i++)
	{
	printf ("nhap gia tri %d:", i+1);
	scanf ("%d", &ary[i]);
	}
	min = ary[0];
	max = ary[0];
	for (i=0; i<5; i++)
	{
		if (ary[i]>max)
			max = ary[i];}
			
	for (i=0; i<5; i++)	
	{	
		if (ary[i]<min)
			min = ary[i];}
			
	printf ("max = %d\n", max);
	printf ("min = %d\n", min);
	
	
	
	
	return 0;
}
