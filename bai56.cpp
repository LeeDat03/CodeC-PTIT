#include<stdio.h>

int ucln(int a,int b){
	if(a%b!=0) return ucln(b,a%b);
	else return b;
}
	 
int bcnn(int a,int b){
	return a*b/ucln(a,b);
}

int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	printf("%d\n%d",ucln(a,b),bcnn(a,b)); 
}
