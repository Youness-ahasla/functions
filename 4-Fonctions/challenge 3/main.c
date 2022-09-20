#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool isPrime(int num){
	
	int i;
		
	if(num!=1){
		for(i =2; i < num; i++){
		if(num % i == 0) return false;
	}
}
}

int main() {
	
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);
	
	if(isPrime(num)){
		printf("Num is prime");
	}else
		printf("num is not prime");
}
