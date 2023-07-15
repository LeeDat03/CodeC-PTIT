#include<stdio.h>

int main(){
	int t;
	scanf("%d",&t);
	for(int k=1;k<=t;++k){
		int n;
		scanf("%d",&n);
		int a[100][100];
		for(int i=0;i<n;++i){
			int x=1;
			for(int j=0;j<n;++j){
				if(j>i){
					a[i][j]=0;
				}else{
					a[i][j]=x++;
				}
			}
		}
		printf("Test %d:\n",k);
		for(int i=0;i<n;++i){
			for(int j=0;j<n;++j){
				int s=0;
				for(int h=0;h<n;++h){
					s+=a[i][h]*a[j][h];
				}
				printf("%d ",s);
			}
			printf("\n");
		}
	}
}
