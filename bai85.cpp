#include<stdio.h>
#include<math.h>

int check(long long n){
	int a,d=0;
	while(n){
		a=n%10;
		if(a!=0 && a!=1 && a!=8 && a!=9) return 0;
		if(a==1) ++d;
		n/=10;
	}
	if(d==0) return 0;
	return 1;
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long n,s=0;
		int x=0,y=0;
		scanf("%lld",&n);
		if(check(n)==0) printf("INVALID\n");
		else{			
			while(n){
				int a=n%10;
				if(a==0 || a==8 || a==9)	x=0;
				else if(a==1) x=1;
				n/=10;
				s+=x*pow(10,y);
				++y;
			}
			printf("%lld\n",s);
		}
	}
}
