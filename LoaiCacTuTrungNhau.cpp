#include <stdio.h>
#include <string.h>

void xoa(char *src, int pos, int len){
	int size= strlen(src);
	for(int i=pos; i<=size-len; i++){
		src[i]=src[i+len];
	}
}
void timvitri(char *src, char *token){
	int len = strlen (token);
	for(int i=0 ; src[i]!='\0'; i++){
		if(strstr(&src[i],token) == &src[i]){
			xoa(src,i,len);
			i--;
		}
	}
}
int main() {
	char s[100];
	fgets(s,99,stdin);
	
    return 0;
}

