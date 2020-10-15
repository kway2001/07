#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int inc(int counter)
{
	counter++;
	return counter;
}

int main(int argc, char *argv[]) {
	
	int i=0;
	
	printf("before function call i = %d\n", i);
	inc(i);
	printf("after function call i = %d\n", i);
	
	return 0;
}
