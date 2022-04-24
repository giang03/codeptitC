#include <stdio.h>

int main() {
	unsigned int a,b;
	int sum=0;
	scanf("%u%u",&a,&b);
	if (a<b){
		for(int i=a;i<=b;i++){
		sum+=i;
	}
	} 
	else{
		for(int i=b;i<=a;i++){
		sum+=i;
	}
	}
	
	printf("%d",sum);
    return 0;
}

