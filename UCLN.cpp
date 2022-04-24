#include <stdio.h>

int main() {
	int t,ucln;
	unsigned int a,b;
	scanf("%d",&t);
	while(t--){
		scanf("%u%u",&a,&b);
		for(int i=a;i>=1;i--){
			if(a%i==0 && b%i==0){
				ucln=i;
				break;
			}	
		} 
		printf("%d\n",ucln);
	} 
    return 0;
}

