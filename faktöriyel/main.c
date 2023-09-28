#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int factorial(int sayi){
	int fact=1;
	
	for(;sayi>0;sayi--){
		fact*=sayi;
		
	}
	return fact;
	
	
}




int main(int argc, char *argv[]) {
	
	int n;
	printf("Faktoriyeli alinacak sayiyi giriniz :");
	scanf("%d",&n);
	
	printf("%d ! = : %d",n,factorial(n));
	
	return 0;
}
