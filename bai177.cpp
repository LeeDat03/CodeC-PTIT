#include<stdio.h>
#include<math.h>

int snt(int n){
	for(int i=2;i<=sqrt(n);++i){
		if(!(n%i)) return 0;
	}
	return n>1;
}

int main(){
	int n;
	scanf("%d",&n);
	int a[n][n];
	for(int i=0;i<n;++i){
		for(int j=0;j<n;++j){
			scanf("%d",&a[i][j]);
		}
	}
	int d=0,max=0,vt=0;
	for(int i=0;i<n;++i){
		int d=0;
		for(int j=0;j<n;++j){
			if(snt(a[i][j])) ++d;
		}
		if(d>max) vt=i, max=d;
	}
	printf("%d\n",vt+1);
	for(int j=0;j<n;++j){
		if(snt(a[vt][j])) printf("%d ",a[vt][j]);
	}
}
