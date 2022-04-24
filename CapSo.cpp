#include <stdio.h>
int UCLN(int a, int b){
	for(int i=a; i>=1;i--){
		if(a%i==0 && b%i==0) return i;
		
	}
}
int main() {
	int a,b,c,d,t;
	scanf("%d",&t);
	while(t--){
		scanf("%d%d%d%d",&a,&b,&c,&d);
		if(UCLN(a,b)==UCLN(c,d)) printf("YES\n");
		else printf("NO\n");
	}
    return 0;
}

