#include <stdio.h>
#include <math.h>

int STN(int a);
int main() {
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		int cnt=0;
		scanf("%d",&n);
		long long l = pow(10,n-1) , r = pow(10,n);
		for(int i=l; i<r; i++){
			if(STN(i)) cnt++; 
		}
		printf("%d\n",cnt);
	}
    return 0;
}
int STN(int a){
	int c = a;
	int tn=0;
	int tong=0;
	while(a!=0){
		tong+= a%10;
		tn= tn*10+ a%10;
		a/=10;
	}
	if(tn == c && tong%10==0) return 1;
	else return 0;
}
