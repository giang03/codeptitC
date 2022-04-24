#include <stdio.h>
int SoNguyenTo(int a){
	if (a<2) return 0;
	for (int i=2 ; i*i<=a; i++){
		if(a%i==0) return 0;
	}
	return 1;
}
int main() {
	int n=2,count=0;
	unsigned int t;
	scanf("%u",&t);
		while (count < t){
			if(SoNguyenTo(n)){
				printf("%d\n",n);
				count++;
			}
			n++;
		}
    return 0;
}

