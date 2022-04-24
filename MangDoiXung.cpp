#include <stdio.h>

int NhapMang(int a);
int N[100];
int main() {
	int t;
	scanf("%d",&t);
	while(t--){
		int n,b=0,c=0;
		scanf("%d",&n);
		NhapMang(n);
		for(int i=0; i<n; i++){
			b=b*10 + N[i];
		}
		for(int j=n-1; j>=0; j--){
			c=c*10 + N[j];
		}
		if(b==c) printf("YES");
		else printf("NO");
		printf("\n");
	}
    return 0;
}
int NhapMang(int a){
	for(int i=0; i<a; i++){
		scanf("%d",&N[i]);
	}
}
