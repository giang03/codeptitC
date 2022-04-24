#include <stdio.h>
int SoNto(int a, int b){
	while(a!=b){
		if(a>b) a-=b;
		else b-=a;
	}
	if(a==1) return 1;
	else return 0;
}
int main() {
	int a,b;
	scanf("%d%d",&a,&b);
	for(int i=a; i<=b; i++){
		for(int j=i+1; j<=b; j++){
			if(SoNto(i,j)) printf("(%d,%d)\n",i,j);
		}
	}
    return 0;
}

