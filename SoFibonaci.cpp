#include <stdio.h>

int SoFibonacci(int n);
int main() {
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		if(n<=92){
			printf("%lld\n",SoFibonacci(n));
		}
	}
    return 0;
}
int SoFibonacci(int n){
	if(n<3) return 1;
	long long fn2=1, fn1=1 , fn;
	for (int i=3; i<=n;i++){
		fn = fn1+fn2;
		fn2=fn1;
		fn1=fn;
	}
	return fn;
}
