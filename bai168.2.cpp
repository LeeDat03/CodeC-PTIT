#include<stdio.h>

int main(){
	int m,n;
	scanf("%d%d",&m,&n);
	int x[100][100];
	for(int i=0;i<m;++i){
		for(int j=0;j<n;++j){
			scanf("%d",&x[i][j]);
		}
	}
	int a,b;
	scanf("%d%d",&a,&b);
	for(int j=0;j<n;++j){
		int c=x[a-1][j];
		x[a-1][j]=x[b-1][j];
		x[b-1][j]=c;
	}
	for(int i=0;i<m;++i){
		for(int j=0;j<n;++j){
			printf("%d ",x[i][j]);
		}
		printf("\n");
	}
	
}
