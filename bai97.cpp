#include<stdio.h>

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int a[n];
		for(int i=0;i<n;++i) scanf("%d",&a[i]);
		int d=0,max=-1e9;
		for(int i=0;i<n;++i){
			if(a[i]>=max){
				++d;
				max=a[i];
			}
		}
		printf("%d\n",d);
	} 
}


