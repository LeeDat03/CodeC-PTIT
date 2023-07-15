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
	int a[100][100];
	for(int i=0;i<n;++i){
		for(int j=0;j<n;++j){
			scanf("%d",&a[i][j]);
		}
	}
	int s=0;
	for(int i=0;i<n;++i){
		for(int j=0;j<n;++j){
			if(j>=i){
				if(snt(a[i][j])) s+=a[i][j];
			}
		}
	}
	printf("%d",s);
}
