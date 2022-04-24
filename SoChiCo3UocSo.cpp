#include <stdio.h>
#include <math.h>
 
int arr[1000005]={0};
int main(){
    arr[0]=arr[1]=1;
    for (int i=2;i*i<1000005;i++){
        if (arr[i]==0){
            for (int j=i*i;j<1000005;j+=i) arr[j]=1;
        }
    }
    int t;
    scanf("%d",&t);
    while (t--){
        long long r,l;
        scanf("%lld%lld",&r,&l);
        int dem=0;
        for (int i=(int)sqrt(r);i<=(int)sqrt(l);i++){
            if (arr[i]==0) dem++;
        }
        printf("%d\n",dem);
    }
    return 0;
}
