#include<stdio.h>

//1 2 3 4
//4 1 2 3


void di_chuyen(int n,int a[]){
	int tmp=a[n-1];
	for(int i=n-1;i>0;--i){
		a[i]=a[i-1];
	}
	a[0]=tmp;
}


int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;++i) scanf("%d",&a[i]);
	int x;	scanf("%d",&x);
	for(int i=1;i<=x;++i) di_chuyen(n,a);
	for(int i=0;i<n;++i) printf("%d ",a[i]);
}
