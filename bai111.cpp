#include<stdio.h>

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int a[n];
		int b[1000];
		for(int i=0;i<n;++i) scanf("%d",&a[i]);
		int max=-1e9,j=0;
		for(int i=n-1;i>=0;--i){
			if(a[i]>max){
				max=a[i];
				b[j]=a[i];
				++j;	
			}
		}
		for(int i=j-1;i>=0;--i){
			printf("%d ",b[i]);
		}
		printf("\n");
	}
}
