#include <stdio.h>
int UCLN(int a, int b){
	for (int i=a; i>=1;i--){
		if(a%i==0 && b%i==0) return i;
	}
}
int main() {
	int t;
	long long a,b;
	scanf("%d",&t);
	while(t--){
		scanf("%lld%lld",&a,&b);
		long long tich=a*b;
		printf("%lld %lld\n",tich/UCLN(a,b),UCLN(a,b));
	}
    return 0;
}

