#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char ary [5];
	int i;
	printf("enter string :\n");
	scanf ("%s", ary);
	printf ("the string is %s\n", ary);
	for (i=0; i<5; i++)
	printf ("%d\t", ary[i]);

}
