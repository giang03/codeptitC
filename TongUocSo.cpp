#include <stdio.h>

int TongUoc(int a){
	int sum=0;
	for(int i=2; i<=a; i++){
		while(a%i==0){
			sum+=i;
			a/=i;
		}
	}
	return sum;
}
int main() {
	int t;
	scanf("%d",&t);
	int tong=0;
	while(t--){
		int a;
		scanf("%d",&a);
		tong+=TongUoc(a);
	} 
	printf("%d",tong);
    return 0;
}

