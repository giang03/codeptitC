#include <stdio.h>
#include <math.h>
int main() {
	int m,n;
	int count=0;
	int a[10000]={};
	scanf("%d%d",&m,&n);
	for(int i=m;i<=n;i++){
		int k;
		k = sqrt(i);
		if(k*k==i){
			a[count]=i; 
			count+=1;
		}
	}
	printf("%d\n",count);
	for (int j=0;j<count;j++){
		printf("%d\n",a[j]);
	} 
    return 0;
}

