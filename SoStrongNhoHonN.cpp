#include<stdio.h>
int gt(int a)
{
	int tan=1;
	for(int i=1;i<=a;i++)
	{
		tan*=i;
	}
	return tan;
}
int ketqua(int n){
	int x=n, sum=0;
	while(n>0){
		sum+=gt(n%10);
		n/=10;
	}
	if(sum == x) return 1;
	return 0;
}
int main(){
	int n;
	scanf("%d",&n);
	for(int i=1; i<=n; i++){
		if(ketqua(i)){
			printf("%d ",i);
		} 
	} 
	return 0;
}
