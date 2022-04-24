#include <stdio.h>

int NhapMang(int n);
int N[100];
int main() {
	int n;
	scanf("%d",&n);
	NhapMang(n);
	int min1=N[0], min2=10000000;
	for(int i=1; i<n; i++){
		if(N[i]<min1){
			min2=min1;
			min1=N[i]; 
		}
		else if(N[i]<min2 && N[i]>min1) min2=N[i];
	}
	
	printf("%d %d",min1,min2);
    return 0;
}
int NhapMang(int n){
	for(int i=0; i<n; i++){
		scanf("%d",&N[i]);
	}
}
