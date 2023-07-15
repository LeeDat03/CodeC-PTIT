#include<stdio.h>

int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int a[100],b[100];
	for(int i=0;i<n;++i) scanf("%d",&a[i]);
	for(int j=0;j<m;++j) scanf("%d",&b[j]);
	int p;
	scanf("%d",&p);
	for(int i=0;i<p;++i) printf("%d ",a[i]);
	for(int j=0;j<m;++j) printf("%d ",b[j]);
	for(int i=p;i<n;++i) printf("%d ",a[i]);
}

