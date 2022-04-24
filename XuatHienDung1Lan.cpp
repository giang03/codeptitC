#include <stdio.h>

int NhapMang(int a);
int N[100],a[1000001]={0};
int main() {
	int n,dem=0;
	scanf("%d",&n);
	NhapMang(n);
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(N[i] == N[j]) a[N[i]]++;
		}
	}
	for(int i=0; i<n; i++){
		if(a[N[i]]==1) dem++;
	}
	printf("%d\n",dem);
	for(int i=0; i<n; i++){
		if(a[N[i]]==1) printf("%d ",N[i]);
	}
    return 0;
}
int NhapMang(int a){
	for(int i=0; i<a; i++){
		scanf("%d",&N[i]);
	}
}

