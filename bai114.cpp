#include<stdio.h>

int main(){
	int t;
	scanf("%d",&t);
	for(int h=1;h<=t;++h){
		int m,n;
		scanf("%d%d",&m,&n);
		int a[m][n];
		for(int i=0;i<m;++i){
			for(int j=0;j<n;++j){
				scanf("%d",&a[i][j]);
			}
		}
		printf("Test %d:\n",h);
		for(int i=1;i<m;++i){
			for(int j=1;j<n;++j){
				printf("%d ",a[i][j]);
			}
			printf("\n");
		}
		printf("\n");
	}
}
