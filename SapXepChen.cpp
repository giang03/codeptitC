#include <stdio.h>

int main() {
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0; i<n; i++){
		scanf("%d",&a[i]);
	}
	int tg=a[0];
	for(int i=0; i<n; i++){
		printf("Buoc %d: ",i);
		for(int j=0; j<=i; j++){
			if(a[j]>a[i]){
				tg=a[j];
				a[j]=a[i];
				a[i]=tg;
			}
			printf("%d ",a[j]);
		}
		printf("\n");
	}
    return 0;
}
