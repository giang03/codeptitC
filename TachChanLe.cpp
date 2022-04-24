#include <stdio.h>

int NhapMang(int a);
int N[100];
int main() {
	int n;
	scanf("%d",&n);
	NhapMang(n);
	for(int i=1; i<=n; i++){
		if(N[i]%2==0) printf("%d ",N[i]);
	}
	printf("\n");
	for(int i=1; i<=n; i++){
		if(N[i]%2!=0) printf("%d ",N[i]);
	}
    return 0;
}
int NhapMang(int a){
	for(int i=1; i<=a; i++){
		scanf("%d",&N[i]);
	}
}

