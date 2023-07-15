#include<stdio.h>

int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int a[100][100];
	for(int i=0;i<n;++i){
		for(int j=0;j<m;++j){
			scanf("%d",&a[i][j]);
		}
	}
	int b[100];
	int x=0;
	for(int i=0;i<n;++i){
		for(int j=0;j<m;++j){
			b[x++]=a[i][j];
		}
	}
	for(int i=0;i<x-1;++i){
		for(int j=i+1;j<x;++j){
			if(b[i]>b[j]){
				int tmp=b[i];
				b[i]=b[j];
				b[j]=tmp;
			}
		}
	}
	int y=0;
	for(int i=0;i<x;++i){
		printf("%d ",b[i]);
//		++y;
//		if(y==m){
//			printf("\n");
//			y=0;
//		}
	}
}
