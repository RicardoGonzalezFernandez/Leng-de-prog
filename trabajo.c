#include <stdio.h>

int main (){
	int i=5;
	int result=1;
	result++;
	result = (4*7-2)+(result + result) - 1 - 2;
	result--;
	result = result / 13 ;
	result = result*8;

	printf ("%d",result);
} 