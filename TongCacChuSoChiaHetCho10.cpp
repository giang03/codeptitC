#include <stdio.h>
int TongChuSoChiaHetCho10(int a){
	int sum =0;
	while(a!=0){
		sum+=a%10;
		a/=10;
	}
	if(sum%10==0) return 1;
	else return 0;
}
int main() {
	int t,a;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&a);
		if(TongChuSoChiaHetCho10(a))printf("YES\n");
		else printf("NO\n");
	}
    return 0;
}

