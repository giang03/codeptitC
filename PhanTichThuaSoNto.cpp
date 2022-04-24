#include <stdio.h>
#include <math.h>
int ThuaSoNto(int a){
	int count[1000];
	for(int i=2; i<=a; i++){
		count[i]=0;
		while(a%i==0){
			a/=i;
			count[i]++;
		}
		if(a>i && count[i]>0 ) printf("%d^%d * ",i,count[i]); 
		else if(count[i]>=1) printf("%d^%d",i,count[i]);
	}
}
int main() {
	int a,t;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&a);
		printf("%d = ",a);
		ThuaSoNto(a);
		printf("\n");
	}
    return 0;
}

