#include <stdio.h>

int main() {
	int m,n;
	scanf("%d%d",&m,&n);
	int s[m][n];
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			scanf("%d",&s[i][j]);
		}
	}
	int a,b;
	scanf("%d%d",&a,&b);
	for(int j=0; j<n; j++){
		int tmp = s[a-1][j];
		s[a-1][j]=s[b-1][j];
		s[b-1][j]=tmp;
	}
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			printf("%d ",s[i][j]);
		}
		printf("\n");
	}
    return 0;
}

