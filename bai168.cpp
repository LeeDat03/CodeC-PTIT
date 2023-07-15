#include<stdio.h>

void input(int m,int n,int A[][100]){
	for(int i=0;i<m;++i){
		for(int j=0;j<n;++j){
			scanf("%d",&A[i][j]);
		}
	}
}

int row(int m,int n,int A[][100]){
	int vt=0,max=0;
	for(int i=0;i<m;++i){
		int s=0;
		for(int j=0;j<n;++j){
			s+=A[i][j];
		}
		if(s>=max){
			max=s;
			vt=i;
		}
	}
	return vt;
}

int column(int m,int n,int A[][100]){
	int vt=0,max=0;
	for(int j=0;j<n;++j){
		int s=0;
		for(int i=0;i<m;++i){
			if(i!=row(m,n,A))	s+=A[i][j];
		}
		if(s>=max){
			max=s;
			vt=j;
		}
	}
	return vt;
}


int main(){
	int t;
	scanf("%d",&t);
	for(int k=1;k<=t;++k){
		int m,n;
		scanf("%d%d",&m,&n);
		int A[100][100];
		input(m,n,A);
		printf("Test %d:\n",k);
		for(int i=0;i<m;++i){
			for(int j=0;j<n;++j){
				if(i!=row(m,n,A) && j!=column(m,n,A)) printf("%d ",A[i][j]);
			}
		printf("\n");
		}
	}
}
