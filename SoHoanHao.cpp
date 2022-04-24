#include <stdio.h>
int sohoanhao(int a){
	int sum=1;
	for (int i=2 ; i<a; i++){
		if(a%i==0){
			sum+=i;
		}
	}
	if(sum==a) return 1;
	else return 0;
} 
int main() {
	int n;
	scanf("%d",&n);
	printf ("%d",sohoanhao(n));
    return 0;
}

