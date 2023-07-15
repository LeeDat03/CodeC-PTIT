#include<stdio.h>
int main(){
	int m,n,a;
	scanf("%d",&m);
	for(int i=1;i<=m;++i){
		scanf("%d",&n);
		int s=0; 
		while(n!=0){
			a=n%10;
			s+=a;
			n/=10; 
		} 
		printf("%d\n",s); 
	}
	return 0; 
} 
