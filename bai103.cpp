#include<stdio.h>
#include<math.h>

int prime(int n){
	for(int i=2;i<=sqrt(n);++i){
		if(!(n%i)) return 0;
	}
	return n>1;
}

int main(){
	int n,d=0;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;++i){
		scanf("%d",&a[i]);
		if(prime(a[i]))	++d;
	} 
	printf("%d ",d);
	for(int i=0;i<n;++i) if(prime(a[i])) printf("%d ",a[i]);
}
