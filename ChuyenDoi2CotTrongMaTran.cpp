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
	for(int i=0; i<m; i++){
		int tmp = s[i][a-1];
		s[i][a-1]=s[i][b-1];
		s[i][b-1]=tmp;
	}
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			printf("%d ",s[i][j]);
		}
		printf("\n");
	}
    return 0;
}
