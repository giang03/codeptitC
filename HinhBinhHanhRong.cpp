#include <stdio.h>

int main() {
	unsigned int n;
	scanf("%u",&n);
	for(int i=1 ; i<=n ; i++){
		for(int j=1; j<=n-i; j++){
			printf ("~");
		} 
		for(int k=1; k<=n; k++){
			if(i==1 || k==1 || i== n || k==n) printf("*");
			else printf(".");
		}
		printf("\n");
	}
    return 0;
}

