#include <stdio.h>
#include <string.h>

int main() {
	int t;
	scanf("%d",&t);
	getchar(); 
	while(t--){
		char s1[20],s2[20];
		gets(s1);
		for(int i=0; i<strlen(s1)-1; i++){
			s2[i]=s1[i];
		}
		if(s2==s1) printf("YES\n");
		else printf("NO\n");
	}
    return 0;
}

