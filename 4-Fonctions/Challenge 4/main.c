#include <stdio.h>
#include <stdlib.h>

int devidedby(int a, int b){
	
	int divA = a / 2;
	int divB = b / 2;
	
	int i;
			
	if(divA!=1){
		for(i = 2; i < divA; i++){
		if(divA % i == 0) {
			printf("Num is not prime.");
		}else{
			printf("Num is prime.");
	} 
	
	int j;
		
	if(divB!=1){
		for(j = 2; j < a; j++){
		if(divB % j == 0) {
			printf("Num is not prime.");
	}else printf("Num is prime.");
	} 

}

int main() {
	
	printf("Enter number A: ");
	scanf("%d", &a);
	printf("Enter number B: ");
	scanf("%d", &b);

	devidedby(10, 2);
	
	return 0;
}
