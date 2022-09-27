#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char*argv[]){	
	int i;
	
	printf("input the year:");
	scanf("%d",&i);
	
	if (i%4==0&&i%100!=0||i%400==0){
		printf("%d is leep year!\n",i);
	}
	else{
		printf("%d is not leep year!\n",i);
	}

	return 0;
}
