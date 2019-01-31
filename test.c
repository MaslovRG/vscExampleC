#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "mysum.h"

int main(int argc, char *argv[])
{
	int result = mysum(11, 21); 

    if (result == 32)
    {
        printf("Test #1 - OK!"); 
    }
    else
    {
        printf("Test #1 - FAILED!"); 
    }

    // Ожидание ввода, либо ставить точку остановки на return. Как сделать запуск для внутренней консоли я не знаю
    getchar(); 

    return 0; 
}