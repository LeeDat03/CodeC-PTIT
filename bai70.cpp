#include<stdio.h>
#include<math.h>
   
int check(int n){
	int a,b;
	while(n>=10){
		a=n%10;
		n/=10;
		b=n%10;
		if(b>a) return 0; 
	}
	return 1; 
} 

int main(){
	int a;
	scanf("%d",&a);
	while(a--){
		int n;
		scanf("%d",&n);
		int x=pow(10,n-1),y=pow(10,n); 
		for(int i=x;i<y;++i){
		if(check(i)) printf("%d ",i); 
		}
		printf("\n"); 
	} 
} 
