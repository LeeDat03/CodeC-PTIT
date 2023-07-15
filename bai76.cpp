#include<stdio.h>

long long stn(long long n){
	int s=0;
	while(n){
		s=s*10+n%10;
		n/=10;
	}
	return s;
}

int main(){
	long long n;
	scanf("%lld",&n);
	long long x=stn(n);
	int d2=0,d3=0,d5=0,d7=0;
	while(n){
		int a=n%10;
		if(a==2) ++d2;
		if(a==3) ++d3;
		if(a==5) ++d5;
		if(a==7) ++d7;
		n/=10;
	}
	if(d2!=0)	printf("2 %d\n",d2);
	if(d3!=0)	printf("3 %d\n",d3);
	if(d5!=0)	printf("5 %d\n",d5);
	if(d7!=0)	printf("7 %d\n",d7);
}
