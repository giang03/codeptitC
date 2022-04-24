#include <stdio.h>
#include <string.h>
int main() {
	int n;
	scanf("%d",&n);
	char x='A';
	for(int i=1; i<=n; i++){
		int k=n-1;
		printf("%c ",x);
		int v=x+k;
		for(int j=1; j<i; j++){
			printf("%c ",v);
			k--;
			v+=k;
		}
		x++;
		printf("\n");
	}
    return 0;
}

