#include<stdio.h>
#include<math.h>

int dem(int a,int b){
	int d=0; 
	for(int i=sqrt(a);i<=sqrt(b);++i){
		if(i*i>=a) ++d; 
	} 
	return d; 
}

int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	printf("%d\n",dem(a,b)); 
	for(int i=sqrt(a);i<=sqrt(b);++i){
		if(i*i>=a) printf("%d\n",i*i); 
	} 
} 
