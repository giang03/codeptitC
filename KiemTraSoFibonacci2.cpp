#include <stdio.h>
int SoFibonacci(unsigned long long n){
	if(n==0 || n==1) return 1;
	long long fn2=0, fn1=1 , fn;
	for (int i=3; i<=93;i++){
		fn = fn1+fn2;
		if(fn==n) return 1;
		fn2=fn1;
		fn1=fn;
	}
	return 0;
} 
int main() {
	int t;
	unsigned long long n;
	scanf("%d",&t);
	while(t--){
		scanf("%llu",&n);
		if(SoFibonacci(n)) printf("YES\n");
		else printf("NO\n");
	}
    return 0;
}

