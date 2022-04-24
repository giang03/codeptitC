#include <stdio.h>

int N[100][100];
int main() {
	int t;
	scanf("%d",&t);
	for(int k=1; k<=t; k++){
		int a,b;
		scanf("%d%d",&a,&b);
		for(int i=0; i<a; i++){
		for(int j=0; j<b; j++){
			scanf("%d",&N[i][j]);
			}
		}
		printf("Test %d:\n",k);
		for(int i=1; i<b; i++){
		for(int j=1; j<a; j++){
			printf("%d ",N[i][j]);
			}
		printf("\n");
		}
	}
    return 0;
}

