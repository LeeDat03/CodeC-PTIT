#include<stdio.h>
#include<string.h>

int main(){
	int m,n,p,q;
	scanf("%d%d%d%d",&m,&n,&p,&q);
	int a[m][n],b[n][p],c[p][q],d[m][p];
	memset(d,0,sizeof(d));
	for(int i=0;i<m;++i){
		for(int j=0;j<n;++j){
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=0;i<n;++i){
		for(int j=0;j<p;++j){
			scanf("%d",&b[i][j]);
		}
	}
	for(int i=0;i<p;++i){
		for(int j=0;j<q;++j){
			scanf("%d",&c[i][j]);
		}
	}
	for(int i=0;i<m;++i){
		for(int j=0;j<p;++j){
			for(int h=0;h<n;++h){
				d[i][j]+=a[i][h]*b[h][j];
			}
		}
	}
	for(int i=0;i<m;++i){
		for(int j=0;j<q;++j){
			int s=0;
			for(int h=0;h<p;++h){
				s+=d[i][h]*c[h][j];
			}
			printf("%d ",s);
		}
		printf("\n");
	}
	
}
