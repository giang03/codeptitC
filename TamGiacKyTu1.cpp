#include <stdio.h>

int main() {
	int n,k=1;
	char m='a'; 
	scanf("%d",&n);
	for(int i=1; i<=n; i++){
		if(i%2!=0){
			for(int j=k; j<k+i; j++){
			printf("%c ",m+j-1);
			}
			k+=i; 
		}
		else {
			for(int j=k+i-1; j>=k; j--){
				printf("%c ",m+j-1);
			}
			k+=i; 
		}
		printf("\n");
	}
    return 0;
}

