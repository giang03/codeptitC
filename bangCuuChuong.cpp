#include <stdio.h>

int main() {
	unsigned int N;
	scanf ("%u",&N);
	if(1<=N<=9){
		for(int i=1; i<=10;i++){
			printf("%d ",i*N);
		}
	}
	
    return 0;
}

