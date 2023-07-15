#include<stdio.h>

int dem(int n,int p){
	int cout=0;
	for(int i=p;i<=n;i*=p){
		cout +=n/i;
	}
	return cout;
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,p;
		scanf("%d%d",&n,&p);
		printf("%d\n",dem(n,p));
	}
}
