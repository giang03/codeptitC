#include <stdio.h>
#include <math.h>

int main() {
	int a,b;
	scanf("%d%d",&a,&b);
	if(1<=a && b<=100){
		long long gt=1;
		for(int i=2; i<=a; i++){
		gt*=i;
		}
		long long p=pow(2,b);
		if(gt%p==0) printf("Yes");
		else printf("No");
	} 
    return 0;
}

