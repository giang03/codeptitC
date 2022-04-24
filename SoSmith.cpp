#include <stdio.h>
int TongChuSo(int a){
	int sum=0;
	while(a!=0){
		sum+=a%10;
		a/=10;
	}
	return sum;
}
int ThuaSoNto(int a){
	int sum=0;
	for(int i=2; i<=a;i++){
		while(a%i==0){
			if(i>10) sum+=TongChuSo(i);
			else sum+=i;
			a/=i;
		}
	}
	return sum;
}
int main() {
	unsigned long long a;
	scanf("%llu",&a);
	if(ThuaSoNto(a) ==TongChuSo(a)) printf("YES");
	else printf("NO");
    return 0;
}

