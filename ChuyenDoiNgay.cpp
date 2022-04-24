#include <stdio.h>

int main() {
	int a,b,c;
	scanf("%d",&a);
	b=a/365;
	printf("%d ",b);
	a-=365*b;
	c=a/7;
	printf("%d ",c);
	a-=7*c;
	printf("%d",a);
    return 0;
}

