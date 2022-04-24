#include <stdio.h>
int SoHoanHao(int a){
	int sum=1;
	for(int i=2; i<a; i++){
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
	for(int i=2; i<=n; i++){
		if(SoHoanHao(i)) printf("%d ",i);
	}
    return 0;
}

