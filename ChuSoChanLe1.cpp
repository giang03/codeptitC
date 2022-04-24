#include <stdio.h>

int main() {
	int chan=0,le=0;
	unsigned int n;
	scanf("%u",&n);
	while(n!=0){
		if((n%10)%2==0){
			chan+=1;
		}
		else le+=1;
		n/=10;
	}
	printf ("%d %d", le , chan);
    return 0;
}

