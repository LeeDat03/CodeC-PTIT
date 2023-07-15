#include<stdio.h>

int main(){
	int t;
	scanf("%d",&t);
	for(int h=1;h<=t;++h){
		int n;
		scanf("%d",&n);
		int a[n],b[100]={0};
		for(int i=0;i<n;++i) scanf("%d",&a[i]);
		for(int i=0;i<n;++i)	++b[a[i]];
		printf("Test %d:\n",h);
		for(int i=0;i<n;++i){
			if(b[a[i]]!=0){
			printf("%d xuat hien %d lan\n",a[i],b[a[i]]);
			b[a[i]]=0;
			}
		}
	}
}
