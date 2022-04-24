#include <stdio.h>
int SoChan(long long a){
	if(a%2==0) return 1;
	return 0;
}
int Ktra(long long a){
	long long s;
	while(a!=0){
		s=a%10;
		if(SoChan(s)==0) return 0;
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
		if(Ktra(a)) printf("YES\n");
		else printf("NO\n");
	}	
    return 0;
}

