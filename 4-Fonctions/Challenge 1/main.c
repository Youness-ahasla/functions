#include <stdio.h>
#include <stdlib.h>

void add(int a, int b){
	printf("%d + %d = %d", a, b, a+b);
}

int main() {
	add(2,2);
	return 0;
}
