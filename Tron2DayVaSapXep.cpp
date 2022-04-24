#include <stdio.h>

int a[100], b[100]; 
int main() {
	int t;
	scanf("%d",&t);
	for(int k=1; k<=t; k++){
		int n; 
		scanf("%d",&n);
		for(int i=0; i<n; i++){
		scanf("%d",&a[i]);
		}
		for(int i=0; i<n; i++){
		scanf("%d",&b[i]);
		}
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				if(a[i]<a[j]){
					int tg = a[i];
					a[i]=a[j];
					a[j]=tg;
				}
			}
		}
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				if(b[i]>b[j]){
					int tg = b[i];
					b[i]=b[j];
					b[j]=tg;
				}
			}
		}
		printf("Test %d:\n",k);
		int h=0,m=0;
		for(int i=0; i<n*2; i++){
			if(i%2==0){
				printf("%d ",a[h]);
				h++;
			}
			else {
				printf("%d ",b[m]);
				m++;
			}
		}
		printf("\n");
	}
    return 0;
}


