#include<stdio.h>
#include<math.h>

int prime(int a){
	for(int i=2;i<=sqrt(a);++i){
		if(!(a%i)) return 0;
	}
	return a>1;
}

int check(int a){
	if(prime(a)==0) return 0;
	while(a!=0){
		int b=a%10;
		if(prime(b)==0) return 0;
		a/=10;
	}
	return 1;
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int a,b,d=0;
		scanf("%d%d",&a,&b);
		for(int i=a;i<=b;++i){
			if(check(i)) ++d; 
		}
		printf("%d\n",d);
	}
}
