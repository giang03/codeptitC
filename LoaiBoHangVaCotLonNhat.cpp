#include <stdio.h>

int main() {
	int t;
	scanf("%d",&t);
	for(int k=1; k<=t; k++){
		printf("Test %d:\n",k);
		int m,n;
		scanf("%d%d",&m,&n);
		int s[m][n];
		for(int i=0; i<m; i++){
			for(int j=0; j<n; j++){
				scanf("%d", &s[i][j]);
			}
		}
		for(int i=0; i<m; i++){
			for(int j=0; j<n; j++){
				
			}
		}
		for(int i=0; i<m; i++){
			for(int j=0; j<n; j++){
				printf("%d ", s[i][j]);
			}
			printf("\n");
		}
	}
    return 0;
}

