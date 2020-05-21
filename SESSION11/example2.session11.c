#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int ary [10];
	int i, total, high;
	for (i=0; i<10; i++)
	{
		printf ("enter value: %d:", i+1);
		scanf ("%d", &ary[i]);
	}
	high = ary[0];
	for (i=0; i<10; i++)
	{
		if (ary[i]>high)
		high = ary [1];
	}
	printf ("highest value entered was %d\n", high);
	for (i=0, total = 0; i< 10; i++)
		total = total+ ary[1];
	printf ("the average of the element of ary is %d", total/i);	

}
