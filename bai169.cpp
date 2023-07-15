#include<stdio.h>

int main(){
	int m,n;
	scanf("%d%d",&m,&n);
	int a[100][100];
	for(int i=0;i<m;++i){
		for(int j=0;j<n;++j){
			scanf("%d",&a[i][j]);
		}
	}
	int x,y;
	scanf("%d%d",&x,&y);
	for(int i=0;i<m;++i){
		int tmp=a[i][x-1];
		a[i][x-1]=a[i][y-1];
		a[i][y-1]=tmp;
	}
	for(int i=0;i<m;++i){
		for(int j=0;j<n;++j){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
