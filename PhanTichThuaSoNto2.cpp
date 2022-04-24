#include <stdio.h>
int main() {
	int a;
	scanf("%d",&a);
	for(int i=2; i<=a; i++){
		while(a%i==0){
			a/=i;
			printf("%d",i);
			if(a!=1){
				printf("x");
			}else break;
		}
	}
    return 0;
}

