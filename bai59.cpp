#include<stdio.h> 
#include<math.h>
 
int snt(int n){
	for(int i=2;i<=sqrt(n);++i){
		if(!(n%i)) return 0; 
	} 
	return 1; 
} 

int stn(int n){
	int s=0,tmp=n;
	while(n){
		s=s*10+n%10;
		n/=10; 
	} 
	return tmp==s;
} 

int main(){
	int n;
	scanf("%d",&n);
	while(n--){
		int a,b,d=0;
		scanf("%d%d",&a,&b);
		for(int i=a;i<=b;++i){
			if(snt(i)==1 && stn(i)==1){
				printf("%d ",i);
				++d;
			}
			if(d==10){
				printf("\n");
				d=0;
			}
		}
		printf("\n");
	} 
} 
