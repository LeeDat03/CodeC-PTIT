#include<stdio.h>
#include<math.h>

int snt(int n){
	for(int i=2;i<=sqrt(n);++i){
		if(!(n%i)) return 0; 
	} 
	return n>1; 
} 

int tong(int n){
	int s=0;
	while(n){
		s+=n%10;
		n/=10; 
	} 
	return s; 
} 

int fibo(int n){
	if(n==0 || n==1) return 1;
	int a=0,b=1,c;
	while(c<n){
		c=a+b;
		a=b;
		b=c; 
	} 
	return c==n; 
} 

int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	int x=a<b ? a:b;
	for(int i=x;i<=a+b-x;++i){
		if(snt(i)==1 && fibo(tong(i))==1) printf("%d ",i); 
	} 
} 
