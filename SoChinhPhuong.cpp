#include <stdio.h>
#include <math.h>
int main() {
	long long a;
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf ("%lld",&a);
		if(sqrt(a)==(long long)sqrt(a)){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
    return 0;
}

