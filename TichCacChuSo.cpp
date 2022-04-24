#include <stdio.h>

int main() {
	int a,tich=1;
	scanf("%d",&a);
	while(a!=0){
		tich*=a%10;
		a/=10;
	}
	printf("%d",tich);
	
    return 0;
}

