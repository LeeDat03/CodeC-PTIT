#include<stdio.h>
#include<string.h>

void nhap(int n,int a[]){
	for(int i=0;i<n;++i) scanf("%d",&a[i]);
}

void in(int n,int b[],int a[]){
	for(int i=0;i<n;++i) ++b[a[i]];
	int max=0;
	for(int i=0;i<n;++i){
		if(b[a[i]]>=max) max=b[a[i]];
	}
	for(int i=0;i<n;++i){
		if(b[a[i]]==max){
			printf("%d ",a[i]);
			b[a[i]]=0;
		}
	}
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int a[1000],b[30000];
		memset(b,0,sizeof(b));
		nhap(n,a);
		in(n,b,a);
		printf("\n");
	}
}
