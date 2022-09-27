#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char*argv[]){	
	int i,j,k;
	
	printf("input the second:");
	scanf("%d",&i);
	
	j=i/60;
	k=i%60;
	
	printf("the time is %d:%d",j,k);
	
	return 0;
}
