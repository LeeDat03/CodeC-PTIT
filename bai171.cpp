#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int a[100][100];
	for(int i=0;i<n;++i){
		for(int j=0;j<n;++j){
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=0;i<n;++i){
		for(int j=0;j<n;++j){
			if(i+j==n-1){
				int tmp=a[i][j];
				a[i][j]=a[i][n-1-j];
				a[i][n-1-j]=tmp;
			}
		}
	}
	for(int i=0;i<n;++i){
		for(int j=0;j<n;++j){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
