#include <stdio.h>
int SoNto(int a){
	if(a<2) return 0;
	for(int i=2; i<a; i++){
		if(a%i==0) return 0;
	}
	return 1;
}
int ChiaHetCho5(int a){
	int sum=0;
		while(a!=0){
		sum+=a%10;
		a/=10;
		}
		if(sum%5==0) return 1;
		else return 0;
	
} 
int main() {
	unsigned int a;
	int count=0;
	scanf("%u",&a);
	for(int i=1; i<a;i++){
		if(ChiaHetCho5(i) && SoNto(i)){
			count++;
			printf("%d ",i);
		}
	}
	printf("\n%d", count);
    return 0;
}

