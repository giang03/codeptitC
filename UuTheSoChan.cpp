#include <stdio.h>
int SoChan(long long a){
	if(a%2==0) return 1;
	return 0;
}
int Ktra(long long a){
	int s;
	int chan=0,le=0; 
	while(a!=0){
		s=a%10;
		if(SoChan(s)) chan++;
		else le++;
		a/=10; 
	}
	if(chan>le) printf("YES\n");
	else printf("NO\n");
	
}
int main() {
	int t;
	long long a;
	scanf("%d",&t);
	while(t--){
		scanf("%lld",&a);
		Ktra(a);
	}	
    return 0;
}

