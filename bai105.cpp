#include<stdio.h>

//1 2 3 4
//2 3 4 1

void di_chuyen(int n,int a[]){
	int tmp=a[0];
	for(int i=0;i<n-1;++i){
		a[i]=a[i+1];
	}
	a[n-1]=tmp;
}


int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;++i) scanf("%d",&a[i]);
	int t;
	scanf("%d",&t);
	for(int i=1;i<=t;++i)	di_chuyen(n,a);
	for(int i=0;i<n;++i){
		printf("%d ",a[i]);
	}
}
