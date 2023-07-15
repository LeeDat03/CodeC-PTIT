//1	2	3	4	5
//16	17	18	19	6	
//15	24	25	20	7	
//14	23	22	21	8	
//13	12	11	10	9	

#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int a[100][100];
	int d=1;
	for(int i=0;i<=n/2;++i){
		for(int j=i;j<=n-i-1;++j)	a[i][j]=d++;
		for(int j=i+1;j<=n-i-1;++j)	a[j][n-i-1]=d++;
		for(int j=n-i-2;j>=i;--j)	a[n-i-1][j]=d++;
		for(int j=n-i-2;j>=i+1;--j) a[j][i]=d++;
	}
	for(int i=0;i<n;++i){
		for(int j=0;j<n;++j){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
					
