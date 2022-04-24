#include <stdio.h>
int SoThuanNghich(long long a){
	int dao=0;
	int s=a;
	while(a!=0){
		dao= dao*10+a%10;
		a/=10;
	}
	if(dao==s) return 1;
	else return 0;
}
int TongChuSo(long long a){
	int sum=0;
	while (a!=0){
		sum+=a%10;
		a/=10;
	}
	if(sum%2==0) return 0;
	else return 1;
}
int ChuSoLe(long long a){
	while(a!=0){
		if((a%10)%2==0) return 0;
		a/=10;
	}
	return 1;
}
int main() {
	int t;
	long long a;
	scanf("%d",&t);
	while(t--){
		scanf("%lld",&a);
		if(SoThuanNghich(a) && TongChuSo(a) && ChuSoLe(a)) printf("YES\n");
		else printf("NO\n");
	}
    return 0;
}

