#include<stdio.h>
#include"mylib.h"

int main () {
	printf("Calling add(2,3) from mylib\nadd(2,3) = %d\n", add(2,3));
	printf("Calling multiply(2,3) from mylib\nmultiply(2,3) = %d\n", multiply(2,3));
	return 0;
}
