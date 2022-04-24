#include <stdio.h>

int NhapMang1(int a);
int NhapMang2(int a);
int N[100], M[100];
int main() {
	int n,m,p;
	scanf("%d%d",&n,&m);
	NhapMang1(n);
	NhapMang2(m);
	scanf("%d",&p);
	for(int i=1; i<=p; i++){
		printf("%d ",N[i]);
	}
	for(int i=1; i<=m; i++){
		printf("%d ",M[i]);
	}
	for(int i=p+1; i<=n; i++){
		printf("%d ",N[i]);
	}
    return 0;
}
int NhapMang1(int a){
	for(int i=1; i<=a; i++){
		scanf("%d",&N[i]);
	}
}
int NhapMang2(int a){
	for(int i=1; i<=a; i++){
		scanf("%d",&M[i]);
	}
}


