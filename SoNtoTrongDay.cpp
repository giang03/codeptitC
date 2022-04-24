#include <stdio.h>

int SNT(int a);
int NhapMang(int a);
int N[100];
int main() {
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		NhapMang(n);
		for(int i=0; i<n; i++){
			if(SNT(N[i])) printf("%d ",N[i]);
		}
		printf("\n");
	}
    return 0;
}
int SNT(int a){
	if(a<2) return 0;
	for(int i=2; i<a; i++){
		if(a%i==0) return 0;
	}
	return 1;
}
int NhapMang(int a){
	for(int i=0; i<a; i++){
		scanf("%d",&N[i]);
	}
}
