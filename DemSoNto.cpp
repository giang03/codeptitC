#include <stdio.h>
int SoNto(int a){
	if(a<2) return 0;
	for(int i=2; i*i<=a; i++){
		if(a%i==0) return 0;
	}
	return 1;
}
int KiemTraChuSo(int a){
	int s;
	while(a!=0){
			s=a%10;
			a/=10;
			if(SoNto(s)==0) return 0;
	}
	return 1;
}
int main() {
	int a,t,b;
	scanf("%d",&t);
	while(t--){
		int count=0;
		scanf("%d%d",&a,&b);
		for(int i=a; i<=b; i++){
			if(SoNto(i) && KiemTraChuSo(i)) count++;
		}
		printf("%d\n",count);
	}
    return 0;
}

