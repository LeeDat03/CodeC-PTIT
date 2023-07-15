#include<stdio.h>

int stn(int n){
	int a=0,tmp=n;
	while(n){
		a=a*10+n%10;
		n/=10;
	}
	return a==tmp;
}

int check(int n){
	if(stn(n)==0) return 0;
	else{
		int a=0;
		while(n){
			a=n%10;
			if(a==9) return 0;
			n/=10;
		}
		return 1;
	}
}

int main(){
	int n,d=0;
	scanf("%d",&n);
	for(int i=2;i<=n;++i){
		if(check(i)){
			++d;
			printf("%d ",i);
		}
	}
	printf("\n%d",d);
}
