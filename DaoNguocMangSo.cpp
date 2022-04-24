#include <stdio.h>

int NhapMang(int a);
int N[100];
int main() {
	int n;
	scanf("%d",&n);
	NhapMang(n);
	for(int j=n-1; j>=0; j--){
		printf("%d ",N[j]);
	}
    return 0;
}
int NhapMang(int a){
	for(int i=0; i<a; i++){
		scanf("%d",&N[i]);
	}
}

