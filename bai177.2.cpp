#include<stdio.h>
#include<math.h>

int snt(int n){
	for(int i=2;i<=sqrt(n);++i){
		if(n%i==0) return 0;
	}
	return n>1;
}

int dem(int n){
	int i,d=0;
	for(i=2;;++i){
		if(snt(i)==1) ++d;
		if(d==n) break;
	}
	return i;
}

int dem2(int n){
	int x=0,d=0;
	while(d<n){
		++x;
		if(snt(x)) ++d;
	}
	return x;
}

int main(){
	int t;
	scanf("%d",&t);
	for(int k=1;k<=t;++k){
		int n;
		scanf("%d",&n);
		int a[100][100];
		int d=1;
		for(int i=0;i<=n/2;++i){
			for(int j=i;j<=n-i-1;++j)	a[i][j]=dem(d++);
			for(int j=i+1;j<=n-i-1;++j)	a[j][n-i-1]=dem(d++);
			for(int j=n-i-2;j>=i;--j)	a[n-i-1][j]=dem(d++);
			for(int j=n-i-2;j>=i+1;--j) a[j][i]=dem(d++);
		}
		printf("Test %d:\n",k);
		for(int i=0;i<n;++i){
			for(int j=0;j<n;++j){
				printf("%d ",a[i][j]);
			}
			printf("\n");
		}
	}
}
