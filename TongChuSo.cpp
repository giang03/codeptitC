#include <stdio.h>

int main() {
	int n;
	scanf("%d",&n);
	for (int i=1; i<=n ;i++){
		
		int s=0,a;
		scanf("%d",&a);
		while(a!=0){
			s+=a%10;
			a/=10;
		}
		printf("%d\n",s);
	}
    return 0;
}

