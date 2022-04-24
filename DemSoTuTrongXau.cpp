#include <stdio.h>
#include <string.h>

int main() {
	int t;
	scanf("%d",&t);
	getchar();
	while(t--){
		int dem=0;
		char a[100];
		fgets(a,99,stdin);
		for(int i=0; i<strlen(a)-1; i++){
			if(a[i]!=' '&&(a[i+1]==' '|| a[i+1]=='\n')) dem++;
		}
		printf("%d\n",dem);
	}
    return 0;
}

