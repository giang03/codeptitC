#include <stdio.h>
int SoNto(int a){
	if(a<2) return 0;
	for(int i=2; i*i<=a; i++){
		if(a%i==0) return 0;
	}
	return 1;
}
int ThuanNghich(int a){
	int dao=0;
	int s=a;
	while(a!=0){
		dao= dao*10+a%10;
		a/=10;
	}
	if(dao==s) return 1;
	else return 0;
} 
int main() {
	unsigned int a,b;
	int t;
	scanf("%d",&t);
	while(t--){
		int count=0;
		scanf("%u %u",&a,&b);
		for(int i=a; i<=b; i++){
			if(SoNto(i) && ThuanNghich(i)){
				if(count !=0 && count%10==0) printf("\n");
				printf("%d ",i);
				count++;
				}
		}
		printf("\n");
	}
	return 0;
}

