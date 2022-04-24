#include <stdio.h>
#include <math.h>

int main() {
	float a,b,c,d;
	scanf("%f%f%f",&a,&b,&c);
		d=(b*b)-(4*a*c);
		if(a==0){
			if(b==0){
				printf("NO");
			}
			else{
				printf("%.2f",-c/b);
			}
		}
		else{
			if(d==0){
			printf("%.2f",-b/(2*a));
			}
			if(d>0){
				printf("%.2f %.2f",(-b+sqrt(d))/(2*a),(-b-sqrt(d))/(2*a));
			}
			if(d<0){
				printf("NO");
			}
		}
		
	
    return 0;
}

