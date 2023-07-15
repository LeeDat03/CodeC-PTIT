#include<stdio.h> 
#include<math.h>
 
int dem(long long n,int a){
	int d=0; 
	for(int i=2;i<=sqrt(n);++i){
		while(n%i==0){
			if(a==i) ++d; 
			n/=i; 
		} 
	}
	return d; 
} 

int main(){
	int a;
	scanf("%d",&a);
	for(int j=1;j<=a;++j){
		long long n;
		scanf("%lld",&n);
		printf("Test %d: ",j);
		for(int i=2;i<=sqrt(n);++i){
			if(n%i==0) printf("%d(%d) ",i,dem(n,i));
			while(n%i==0) n/=i; 
		}
	if(n!=1) printf("%lld(%d) ",n,1); 
	printf("\n");
	} 
} 
