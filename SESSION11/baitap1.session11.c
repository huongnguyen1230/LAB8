#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

main(){
	int i, n = 0;
	int item;
	char x[10][12];
	char temp [12];
	
	printf (" sap xep theo thu tu abc\n");
	printf (" type 'END' when over \n");
	
	do 
	{
		printf (" string %d:" ,n+1);
		scanf ("%s" , x[n]);
	} while (strcmp(x[n++], "END"));
	
	n = n - 1;
	for (item = 0; item < n - 1; ++item)
	{
		for (i = item + 1; i<n; ++i)
		{
			if(strcmp (x[item], x[i]>0))
			{ 
			strcpy (temp, x[item]);
			strcpy (x[item], x[i]);
			strcpy (x[i], temp);
			}
		}
	}
	printf ("sap xep theo thu tu abc:\n");
	for (i = 0; i < n; ++i)
	
		printf ("string %d is %s\n", i + 1, x[i]);
	
	
		

}
