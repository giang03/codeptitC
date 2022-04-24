#include <stdio.h>
int SoNto(int a){
	if (a<2) return 0;
	for(int i=2; i<a; i++){
		if(a%i==0) return 0;
	}
	return 1;
}
int ChuSoNto(int a){
	int sum =0;
	while(a!=0){
		sum+=a%10;
		int r = a%10;
		if(r!=2 && r!=3 && r!=5 && r!=7) return 0;
		a/=10;
	}
	return SoNto(sum);
}

int main() {
	int t;
	scanf("%d",&t);
	while(t--){
		int a,b;
		scanf("%d %d",&a,&b);
		int count=0;
		for( int i=a; i<=b; i++){
			if(ChuSoNto(i)&&SoNto(i)) count++;
		}
		printf("%d\n",count);
	}
    return 0;
}

