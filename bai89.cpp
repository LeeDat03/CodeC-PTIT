#include<stdio.h>

int check(int n,int a[]){
	for(int i=0;i<n;++i){
		int j=n-i-1;
		if(a[i]!=a[j]) return 0;
	}
	return 1;
}


int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int a[n];
		for(int i=0;i<n;++i) scanf("%d",&a[i]);
		if(check(n,a)) printf("YES\n");
		else printf("NO\n");
	}
}
