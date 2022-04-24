#include <stdio.h> 

long long lcd(long long a, long long b) { 
	long long p = a*b; 
	while(b != 0) { 
		long long tmp = a%b; 
		a = b; 
		b = tmp; 
	} 
	return p/a; 
} 
int main() { 	
	int t, n; 
	scanf("%d", &t); 
	while(t--) { 
		scanf("%d", &n); 
		long long uc = 1; 
		for(int i = 2; i <= n; i++) { 
			uc = lcd(uc, i); 
		} 
		printf("%lld\n", uc); 
	}
	return 0; 
}

