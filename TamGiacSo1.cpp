#include <stdio.h>
int main() {
	int a,n=1;
	scanf("%d",&a);
	for(int i=1; i<=a; i++){
		for(int j=1; j<=n; j++){
			printf("%d",j);
		}
		n+=2;
		printf("\n");
	}
    return 0;
}

