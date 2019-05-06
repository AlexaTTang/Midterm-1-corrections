/*
 * Q1.c
 *
 *  Created on: May 6, 2019
 *      Author: alexa
 */
/*
 * test.c
 *
 *  Created on: Mar 12, 2019
 *      Author: alexa
 */
#include <stdio.h>

int main()
{
	int rows_Columns;
	printf("Enter number of columns and rows: ");
	fflush(stdout);
	scanf("%d", &rows_Columns);
	int multTable [rows_Columns] [rows_Columns];


  printf("   ");
	//print out table
  for (int h = 1; h <= rows_Columns; h++)
  {
    printf("%i", h);
    printf("   ");
  }
  printf("\n");
  printf("   ");
  printf("%c", '+');
  for (int g = 1; g < rows_Columns*4; g++)
  {
    printf("%c", '-');
  }


	 	 //rows
	     for(int i = 0; i < rows_Columns ; i++)
	     {
	    	 printf("\n");
         printf("%i", i+1);
         printf(" | ");

	     	 //columns
	          for(int j = 0; j < rows_Columns; j++)
	          {

	        	  multTable [i][j] = (i+1) *(j+1);
	     	 	    printf("%i ", multTable[i][j]);
	     	 	    printf(" ");
	          }
	     }
	return 0;
}



