#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "mysum.h"

int main(int argc, char *argv[])
{
	int a = 10;
    int b = 20;   
	printf("Example project\n"); 
	printf("Input first item: "); 
	scanf("%i", &a);
	printf("Input second item: "); 
	scanf("%i", &b);  
	printf("First item: %i", a); 
    printf("Second item: %i", b); 
    int sum = mysum(a, b); 
    printf("Sum: %i", sum); 	

	return 0;
}