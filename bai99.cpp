#include<stdio.h>
#include<string.h>

int cout(int n,int a[],int b[]){
	int d=0;
	for(int i=0;i<n;++i){
		if(b[a[i]]==1) ++d,b[a[i]]=-1;
	}
	return d;
}

int main(){
	int n,d=0;
	scanf("%d",&n);
	int a[n],b[1000];
	memset(b,0,sizeof(b));
	for(int i=0;i<n;++i) scanf("%d",&a[i]), ++b[a[i]];
	printf("%d\n",cout(n,a,b));
	for(int i=0;i<n;++i){
		if(b[a[i]]==-1){
			printf("%d ",a[i]);
			b[a[i]]=0;
		}
	}
}
