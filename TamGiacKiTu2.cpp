#include <stdio.h>

int main() {
	int n,k=1;
	scanf("%d",&n);
	char m='a';
	if(1<n<=20){
		for(int i=1; i<=n; i++){
		for(int j=1; j<=n-i+1; j++){
			printf("%c",m+j-1);
			m++;
			}
		m='a'+i+k;
		k++;
		printf("\n");
		}
	}
    return 0;
}

