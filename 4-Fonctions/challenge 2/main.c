#include <stdio.h>
#include <stdlib.h>

void exchange(int a, int b){
	int x;
	
	printf("Enter number a: ");
	scanf("%d", &a);
	printf("Enter number b: ");
	scanf("%d", &b);
	
	x = a;
	a = b;
	b = x;	
	
	
	printf("a is: %d\n", a);
	printf("b is: %d", b);
}

int main() {
	
	exchange(10, 20);
	return 0;
}
