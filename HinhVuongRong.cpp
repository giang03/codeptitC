#include <stdio.h>

int main() {
	unsigned int n;
	scanf("%u",&n);
	for(int i=0 ; i<n ; i++){
		if(i==n-1 || i==0){
			for (int j=0 ; j<n; j++){
			printf("*");
			}
		}
		else {
			printf("*");
			for(int j=0; j<n-2; j++){
				printf(".");
			}
			printf("*");
		}
		
		printf("\n");
	}
    return 0;
}

