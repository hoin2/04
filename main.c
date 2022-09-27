#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char*argv[]){	
	int i,j;
	int A,B,C,D,E;
	
	printf("input two integers:");
	scanf("%d,%d",&i,&j);
	
	A=i+j;
	B=i-j;
	C=i*j;
	D=i/j;
	E=i%j;
	
	printf("+ result is %d\n",A);
	printf("- result is %d\n",B);
	printf("* result is %d\n",C);
	printf("/ result is %d\n",D);
	printf("%% result is %d\n",E);
	
	return 0;
}
