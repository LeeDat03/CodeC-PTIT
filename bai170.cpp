#include<stdio.h>

int hang(int a[][100],int m,int n){
	int max=0,vt=0;
	for(int i=0;i<m;++i){
		int s=0;
		for(int j=0;j<n;++j){
			s+=a[i][j];
		}
		if(s>max) max=s,vt=i;
	}
	return vt;
}

int cot(int a[][100],int m,int n){
	int max=0,vt=0;
	for(int j=0;j<n;++j){
		int s=0;
		for(int i=0;i<m;++i){
			if(i!=hang(a,m,n)){
				s+=a[i][j];
			}
		}
		if(s>max) max=s,vt=j;
	}
	return vt;
}


int main(){
	int t;
	scanf("%d",&t);
	for(int h=1;h<=t;++h){
		int m,n;
		scanf("%d%d",&m,&n);
		int a[100][100];
		for(int i=0;i<m;++i){
			for(int j=0;j<n;++j){
				scanf("%d",&a[i][j]);
			}
		}
		printf("Test %d:\n",h);
		for(int i=0;i<m;++i){
			for(int j=0;j<n;++j){
				if(i!=hang(a,m,n) && j!=cot(a,m,n))	printf("%d ",a[i][j]);
			}
			printf("\n");
		}
		printf("\n");
	}
}
