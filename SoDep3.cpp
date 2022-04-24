#include <stdio.h>

int STN(int a);
int chua6(int a);
int main() {
	int a,b;
	scanf("%d%d",&a,&b);
	if(a<b){
		for(int i=a; i<=b; i++){
		if(STN(i) && chua6(i)){
			printf("%d ",i);
		}
		}
	}
	else {
		for(int i=b; i<=a; i++){
		if(STN(i) && chua6(i)){
			printf("%d ",i);
		}
	}
	}
    return 0;
}
int STN(int a){
	int c=a;
	int sum=0,tn=0;
	while(a!=0){
		sum+=a%10;
		tn= tn*10 + a%10;
		a/=10;
	}
	if(tn == c && sum%10==8) return 1;
	else return 0; 
}
int chua6(int a){
	while(a!=0){
		int b=a%10;
		if(b==6) {
			return 1;
			break;
		}
		a/=10;
	}
	return 0;
}
