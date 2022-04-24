#include <stdio.h>

int main() {
	int t;
	int N[100];
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		for(int i=0; i<n; i++){
			scanf("%d",&N[i]);
		}
		for(int j=0; j<n; j++){
			if(N[j]%2==0) printf("%d ",N[j]);
		}
		printf("\n");
	} 
    return 0;
}

