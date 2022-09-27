#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char*argv[]){	
	int i,j,k,l;
	
	printf("input the second:");
	scanf("%d",&i);
	
	j=i/3600;
	k=i%3600/60;
	l=i%3600%60;
	
	printf("the time for %d second is %d:%d:%d",i,j,k,l);
	
	return 0;

}
