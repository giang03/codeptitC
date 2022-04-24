#include <stdio.h>
int ThuaSoNto(unsigned int a){
	int tich=1;
	for(int i=2; i<=a; i++){
		if(a%i==0) tich*=i;
		while(a%i==0){
			a/=i;
		}
	}
	printf("%d\n",tich); 
}
int main() {
	int t;
	unsigned int a;
	scanf("%d",&t);
	while(t--){
		scanf("%u",&a);
		ThuaSoNto(a);
	}
    return 0;
}

