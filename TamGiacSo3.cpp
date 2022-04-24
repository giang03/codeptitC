#include <stdio.h>

int main() {
	int n,h=0;
	scanf("%d",&n);
	for(int i=1; i<=n; i++){
		for(int j=1; j<=i*2; j+=2){
			if(j%2!=0) printf("%d",j);
		}
		for(int k=h*2; k>=1; k--){
			if(k%2!=0) printf("%d",k);
		}
		h++;
		printf("\n");
	}
    return 0;
}

