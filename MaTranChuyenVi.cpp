#include <stdio.h>

int N[100][100];
int main() {
	int a,b;
	scanf("%d%d",&a,&b);
	for(int i=0; i<a; i++){
		for(int j=0; j<b; j++){
			scanf("%d",&N[j][i]);
		}
	}
	
	for(int i=0; i<b; i++){
		for(int j=0; j<a; j++){
			printf("%d ",N[i][j]);
		}
		printf("\n");
	}
    return 0;
}

