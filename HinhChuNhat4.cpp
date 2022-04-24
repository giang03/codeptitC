#include <stdio.h>
int main(){
	int m,n,h,k;
	scanf("%d%d",&m,&n);
	if(m<=n){
		k=n; 
		for(int i=1;i<=m;i++){
			for(int j=k;j>=1;j--){
				printf("%d",j);
			}
			for(int j=2;j<=n-k+1;j++){
				printf("%d",j);
			}
			k--;
			printf("\n");
		}
	}
	else{
		int h=m;
		for(int i=n;i<m;i++){
			for(int j=h;j>h-n;j--){
				printf("%d",j);
			}
			h--;
			printf("\n");
		}
		for(int i=0;i<n;i++){
			k=0;
			for(int j=h;j>=1;j--){
				k++;
				printf("%d",j);
			}
			for(int j=2;j<2+(n-k);j++){
				printf("%d",j);
			}
			h--;
			printf("\n");
		}
	}
}
