#include<stdio.h>

int main(){
	int t;
	scanf("%d",&t);
	for(int x=1;x<=t;++x){
		int n,m;
		scanf("%d%d",&n,&m);
		int a[100][100],b[100][100];
		for(int i=0;i<n;++i){
			for(int j=0;j<m;++j){
				scanf("%d",&a[i][j]);
			}
		}
		for(int i=0;i<m;++i){
			for(int j=0;j<n;++j){
				b[i][j]=a[j][i];
			}
		}
		printf("Test %d:\n",x);
		for(int i=0;i<n;++i){
			for(int j=0;j<n;++j){
				int s=0;
				for(int h=0;h<m;++h){
					s+=a[i][h]*b[h][j];
				}
				printf("%d ",s);
			}
			printf("\n");
		}
	}
}
