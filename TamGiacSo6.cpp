#include <stdio.h>

int main() {
	int n,h=0;
	scanf("%d",&n);
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n-i; j++) printf("~");
		for(int k=2; k<=i*2; k+=2) if(k%2==0) printf("%d",k);
		for(int l=h*2; l>=2; l--) if(l%2==0) printf("%d",l);
		h++;
		printf("\n");
	}
    return 0;
}

