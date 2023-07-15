#include<stdio.h>

int check(long long n){
	if(n<1) return 0;
	for(int i=1;i<=n;++i){
		int a=n%10;
		n/=10;
		int b=n%10;
		if(b>a) return 0;
	}
	return 1;
}

int main(){
	int m;
	long long n;
	scanf("%d",&m);
	for(int i=1;i<=m;++i){
	scanf("%lld",&n);
	if(check(n)==1)
	printf("YES\n");
	else printf("NO\n");
}
}
