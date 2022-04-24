#include <stdio.h>

int main() {
	unsigned int a,b;
	scanf("%u%u",&b,&a);
	for(int i=0; i<a; i++){
		if(i== a-1 || i==0){
			for (int j =0 ; j<b; j++){
				printf("*");
			}
		}
		else {
			printf("*");
			for(int j=0; j<b-2; j++){
			printf(" ");
			}
			printf("*");
		}
		
		printf ("\n"); 
	}
    return 0;
}

