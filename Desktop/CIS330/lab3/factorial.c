#include "factorial.h"
#include <stdio.h>
int factorial(int n){
	int sum = 1;	
	for (int i = 1; i <= n; i ++){
		sum = sum * i;
	}
	return sum;
}

int main(){
	printf("%d",factorial(4));
}