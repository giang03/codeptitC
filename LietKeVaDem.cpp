#include <stdio.h>
#include <string.h>

int sokhonggiam(int a){
	int c= a%10; 
	a/=10;
	while(a!=0){
		int b=a%10;
		if(c>b){
			int tg=c;
			c=b;
			b=tg;
		}
		else return 0;
		a/=10;
	}
	return 1;
}
int main() {
	int i=0;
	int a[100];
	int b[100000]={0};
	char kitu=' ';
	while(kitu!='\n'){
		scanf("%d",&a[i]);
		i++;
		if(sokhonggiam(a[i])) b[a[i]]++;
		kitu=getchar();
	}
	for(int j=0; j<100; j++){
		if(b[a[j]]>0) printf("%d %d\n",a[j],b[a[j]]);
	}
    return 0;
}

