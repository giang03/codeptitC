#include <stdio.h>
int main(){
	long long a,b;
	scanf("%lld%lld",&a,&b);
	long long m=a*b;
	while(a!=b){
		if(a>b) a-=b;
		if(b>a) b-=a;
	}
	printf("%lld\n%lld",a,m/a);
}
