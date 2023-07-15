#include<stdio.h>
#include<math.h>

int snt(int n){
	for(int i=2;i<=sqrt(n);++i){
		if(!(n%i)) return 0;
	}
	return n>1;
}

int tong(int n){
	int a=0;
	while(n){
		a+=n%10;
		n/=10;
	}
	return a;
}

int main(){
	int n;
	scanf("%d",&n);
	int d=0;
	for(int i=2;i<=n;++i){
		if(snt(i)==1 && tong(i)%5==0){
			++d;
			printf("%d ",i);
		}
	}
	printf("\n%d",d);
}
