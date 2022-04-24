#include <stdio.h>

int main() {
	int n;
	unsigned int a;
	int b,c;
	scanf("%d",&n);
	for(int i=1 ;i<=n ;i++){
		scanf("%u",&a);
		b=a%10;
		while(a!=0){
			c=a%10;
			a/=10;
		}
		if(b==c){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
    return 0;
}

