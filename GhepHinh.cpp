#include <stdio.h>
#include <math.h> 

int main() {
	int a,b,c,d,e,f;
	scanf("%d%d",&a,&b);
	scanf("%d%d",&c,&d);
	scanf("%d%d",&e,&f);
	int s = a*b + c*d + e*f;
	int r = sqrt(s);
	if(r*r == s) printf("YES");
	else printf("NO");
    return 0;
}

