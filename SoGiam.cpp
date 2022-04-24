#include <stdio.h>

int sogiam(int a){
	int c=a%10;
	a/=10;
	while(a!=0){
		int b=a%10;
		a/=10; 
		if(b>c){
			int tg =b;
			b=c;
			c=tg;
		} 
		else return 0;
	}
	return 1;
} 
int main() {
	int t;
	scanf("%d",&t);
	while(t--){
		int a,b,dem=0;
		scanf("%d%d",&a,&b);
		for(int i=a; i<=b; i++){
			if(sogiam(i)) dem++;
		}
		printf("%d\n",dem);
	}
    return 0;
}

