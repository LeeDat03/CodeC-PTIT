#include<stdio.h>
#include<math.h>

int stn(int n){
	int s=0,tmp=n;
	while(n){
		int a=n%10;
		if(a==4) return 0;
		s=s*10+a;
		n/=10;
	}
	return s==tmp;
}

int sum(int n){
	int s=0;
	while(n){
		s+=n%10;
		n/=10;
	}
	if(s%10!=0) return 0;
	return 1;
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int a;
		scanf("%d",&a);
		for(int i=pow(10,a-1);i<pow(10,a);++i){
			if(sum(i)==1 && stn(i)==1) printf("%d ",i);
		}
		printf("\n");
	}
}
