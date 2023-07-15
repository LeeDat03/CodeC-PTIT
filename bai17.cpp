#include<stdio.h>
int main(){
	int m,n,a,b;
	scanf("%d",&m);
	for(int i=1;i<=m;++i){
		scanf("%d",&n); 
		b=n%10; 
		while(n!=0){
			a=n%10;
			n/=10; 
		} 
		if(a==b){
			printf("YES\n"); 
		}else{
			printf("NO\n"); 
		}
	}
	return 0; 
} 
