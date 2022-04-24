#include <stdio.h>

int NhapMang(int a);
int N[100];
int main() {
	int t;
	scanf("%d",&t);
	while(t--){
		int n,max=0;
		scanf("%d",&n);
		NhapMang(n);
		for(int i=0; i<n; i++){
			if(max<N[i]) {
				max=N[i];
			}
		}
		printf("%d\n",max);
		for(int i=0; i<n; i++){
			if(max==N[i]) printf("%d ",i);
		}
		printf("\n");
	}
    return 0;
}
int NhapMang(int a){
	for(int i=0; i<a; i++){
		scanf("%d",&N[i]);
	}
}
