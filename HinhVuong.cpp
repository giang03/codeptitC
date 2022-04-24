#include <stdio.h>

int main() {
	unsigned int n,m;
	scanf("%u",&n);
	m=n*2-1;
	int a=1, b=m;
	for(int i=1 ; i<=m ; i++){
		for (int j=1 ; j<=m; j++){
			if(i==1 || i==m || j==1 || j==m ) printf("%d",n);
		}
		printf("\n");
	}
    return 0;
}

