#include <stdio.h>
void PhanTichThuaSo(int a){
	int count[1000];
	for(int i=2; i<=a;i++){
		count[i]=0;
		while(a%i==0){
			a/=i;
			count[i]++;
		}
		if(count[i]>=1)	printf("%d(%d) ",i,count[i]);
	}
}
int main() {
	int t;
	int a;
	scanf("%d",&t);
	for(int i=1;i<=t;i++){
		scanf("%d",&a);
		printf("Test %d: ",i);
		PhanTichThuaSo(a);
		printf("\n");
	}
    return 0;
}

