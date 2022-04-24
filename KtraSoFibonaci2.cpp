#include <stdio.h>

int SoFibonacci(int n){
	if(n<3) return 1;
	long long fn2=1, fn1=1 , fn;
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
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		if(SoFibonacci(n)) printf("YES\n");
		else printf("NO\n");
	}
    return 0;
}

