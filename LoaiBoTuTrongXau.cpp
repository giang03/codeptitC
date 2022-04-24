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
	char s1[100];
	char s2[100];
	fgets(s1,99,stdin);
	fgets(s2,99,stdin);
	int len = strlen(s2);
	int size = strlen(s1);
	if(len > 0) s2[len-1]='\0';
	if(size > 0) s1[size-1]='\0';
	timvitri(s1,s2);
	puts(s1);
    return 0;
}

