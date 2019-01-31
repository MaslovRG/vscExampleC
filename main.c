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
	printf("First item: %i\n", a); 
    printf("Second item: %i\n", b); 
    int sum = mysum(a, b); 
    printf("Sum: %i\n", sum); 	

	// Ожидание ввода или точка остановки на return 0. Как сделать запуск во внутренней консоли не знаю. 
	getchar();
	getchar(); 

	return 0;
}