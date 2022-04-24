#include <stdio.h>

int main() {
	int t;
	unsigned int a;
	scanf("%d",&t);
	while(t--){
		scanf("%u",&a);
		for (int i=2; i*i<=a;i++){
			while (a%i==0){
				printf("%d ",i);
				a/=i;
			}
		}
		if(a>1){
			printf("%u",a);
		} 
		printf("\n");
	} 
    return 0;
}

