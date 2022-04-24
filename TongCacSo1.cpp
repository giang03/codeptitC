#include <stdio.h>

int main() {
	long s=0,a;
	scanf("%li",&a);
	while(a!=0){
		s+=a%10;
		a/=10;
	}
	printf("%li",s);
    return 0;
}

