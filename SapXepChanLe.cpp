#include <stdio.h>

int NhapMang(int a);
int N[100];
int main() {
	int n,tg;
	scanf("%d",&n);
	NhapMang(n);
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(N[i]<N[j]){
				tg=N[i];
				N[i]=N[j];
				N[j]=tg;
			}
		}
	}
	for(int i=0; i<n; i++){
		if(N[i]%2==0) printf("%d ",N[i]);
	}
	for(int i=0; i<n; i++){
		if(N[i]%2!=0) printf("%d ",N[i]);
	}
    return 0;
}
int NhapMang(int a){
	for(int i=0; i<a; i++){
		scanf("%d",&N[i]);
	}
}
