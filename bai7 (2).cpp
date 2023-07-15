#include <stdio.h>
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	if (a>=0 && a<=1000 && b>=0 && b<=1000){
	if(b!=0){
		printf("%d %d %d %.2f %d",a+b,a-b,a*b,(float)a/b,a%b); 
	} 
	else{
		printf("0"); 
	}}
	return 0;
}
