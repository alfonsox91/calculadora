/****************************************************************************
 *                                                                          *
 * File    : main.c                                                         *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/

#include <stdio.h>

/****************************************************************************
 *                                                                          *
 * Function: main                                                           *
 *                                                                          *
 * Purpose : Main entry point.                                              *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/

int main(int argc, char *argv[])
{
  int val1,val2,res,res1=0,res2=0,sum1=0,sum2=0,rest1=0,rest2=0;
 double div1=0,div2=0;

 val1=1000;
 val2=2;
	res=val1*val2;
 printf("\nEl resultado de la multiplicacion es=%d",res);
 sum1=10;
sum2=5;
	res1=sum1+sum2;
 printf("\nEl resultado de la suma es=%d",res1);
rest1=10;
rest2=5;
res2=rest1-rest2;
 printf("\nEl resultado de la resta es=%d",res2);
	div1=10;
	div2=2;
double res3=div1/div2;
 printf("\nEl resultado de la divicion es=%f",res3);
  
 
   return 0;
}

