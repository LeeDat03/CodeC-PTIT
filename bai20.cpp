#include<stdio.h>

int snt(int n){
	for(int i=2;i<n;++i){
		if(n%i==0) return 0; 
	} 
	return 1; 
} 

void ptsnt(int n){
	 for(int i=2;i<=n;++i){
		if(snt(i)==1){
			while(!(n%i)){
				printf("%d ",i); 
				n/=i; 
			} 
		} 
	 }
} 

int main(){
	int a;
	scanf("%d",&a);
	while(a--){
		int n;
		scanf("%d",&n);
		ptsnt(n); 
		printf("\n"); 
	} 
} 
