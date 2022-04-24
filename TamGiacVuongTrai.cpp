#include <stdio.h>

int main() {
	unsigned int n;
	scanf("%u",&n);
	for(int i=1 ; i<=n ; i++){
		for (int j=1 ; j<=n; j++){
			if(j==1 || j<i) printf("*");
		}
		printf("\n");
	}
    return 0;
}

