#include <stdio.h>

int GiaiThua(int a){
	long long tich=1;
	for(int i=1; i<=a; i++){
		tich*=i;
	}
	return tich;
}
int main() {
	int a,b,c;
	long long tong = 0;
	scanf("%d%d%d",&a,&b,&c);
	tong = GiaiThua(a) + GiaiThua(b) + GiaiThua(c);
	printf("%lld",tong);
    return 0;
}

