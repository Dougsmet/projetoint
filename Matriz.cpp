#include <stdlib.h>
#include <stdio.h>


int main()

{
	char num[20][20];
	int i, j;
	
	printf ("\n\nExercicio 4\n\n");
		printf ("\n\n\n");
	
	for (i=0;i<6;i++){
		for (j=0;j<10;j++){
				fflush(stdin);
				num[i][j] = '*';
		}
	}
	for (i=0;i<6;i++){
	printf ("\n");
		for (j=0;j<10;j++){		
			
			printf ("%c", num[i][j]);	
		
	
		}
	}
	
		printf ("\n\nExercicio 5\n\n");
		printf ("\n\n\n");
		
		char num1[20][20];
	
	
	for (int i=0;i<6;i++){
		for (int j=0;j<10;j++){
				fflush(stdin);
				num1[i][j] = '*';
		}
	}
	for (i=0;i<6;i++){
	printf ("\n");
		for (j=i;j<6;j++){		
			
			printf ("%c", num1[i][j]);	
		
	
		}
	}


}
