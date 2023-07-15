#include<stdio.h>
#include<string.h>

int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;++i) scanf("%d",&a[i]);
	int b[1000];
	memset(b,0,sizeof(b));
	for(int i=0;i<n;++i) ++b[a[i]];
	for(int i=0;i<n;++i){
		if(b[a[i]]>=2){
			printf("%d ",a[i]);
			b[a[i]]=0;
		}
	}
}
