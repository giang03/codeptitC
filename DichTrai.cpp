#include <stdio.h>

int NhapMang(int a);
int N[100];
int main() {
	int n,p;
	scanf("%d",&n);
	NhapMang(n);
	scanf("%d",&p);
	for(int i=p; i<n; i++){
		printf("%d ",N[i]);
	}
	for(int i=0; i<p; i++){
		printf("%d ",N[i]);
	}
    return 0;
}
int NhapMang(int a){
	for(int i=0; i<a; i++){
		scanf("%d",&N[i]);
	}
}
