#include<stdio.h> 
#include<string.h> 
int main(){
	int t; 
	scanf("%d",&t); 
	while(t--){ 
		char a[500]; 
		scanf("%s",&a); 
		int n=strlen(a),dem=0,tong=0; 
		int b[500],x=0; 
		for(int j=0;j<n;j++){ 
			b[x]=a[j]-'0'; 
			tong =tong+b[x]; 
			x++; 
		} 
		for(int i=0;i<n;i++){ 
		if(a[i]!=a[n-i-1]||b[0]!=8||b[n-1]!=8){ 
			dem=1;
			break; 
			}
		} 
		if(dem==0&&tong%10==0){ 
		printf("YES\n"); 
		}else{ printf("NO\n"); } 
	} 
}

