#include <stdio.h>
int SoNguyenTo(int a){
	if(a<2) return 0;
	for(int i=2; i*i <=a;i++){
		if (a%i==0) return 0;
	}
	return 1;
}
int main() {
	int a;
	scanf("%d",&a);
	for(int i=1; i<=a; i++){
		if(SoNguyenTo(i)) printf("%d\n",i);
	}
    return 0;
}

