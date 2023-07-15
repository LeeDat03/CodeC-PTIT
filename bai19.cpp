#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n); 
	int a,b;
	for(int j=1;j<=n;++j){ 
		scanf("%d%d",&a,&b);
		if(a!=0 || b!=0){ 
		for(int i=b;i>=1;--i){
			if(a%i==0 && b%i==0){
				printf("%d\n",i);
				break; 
			} 
		}
	}
	}
	return 0; 
} 
