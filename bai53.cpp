#include<stdio.h>

int tong(int n){
	int s=0; 
	while(n){
		 s+=n%10;
		 n/=10; 
	} 
	return s; 
} 

int check(int n){
	if(!(n%10)) return 1;
	return 0; 
} 

int main(){
	int n;
	scanf("%d",&n);
	while(n--){
		int a;
		scanf("%d",&a);
		if(check(tong(a))) printf("YES\n");
		else printf("NO\n"); 
	}  
} 
