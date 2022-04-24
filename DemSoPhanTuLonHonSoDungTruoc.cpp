#include<stdio.h> 
int main() { 
	int t; 
	scanf("%d", &t); 
	while (t--) { 
		int n, a[100], dem=0; 
		scanf("%d", &n); 
		for (int i=0; i<n; i++) { 
			scanf("%d", &a[i]); 
		} 
		for (int i=0; i<n; i++) { 
			int kt=1; 
			for (int j=0; j<i; j++) { 
			if (a[i] < a[j]) { 
				kt=0; 
				break; 
				} 
			} 
			if (kt) dem++; 
		} 
		printf("%d\n", dem); 
	} 
}

