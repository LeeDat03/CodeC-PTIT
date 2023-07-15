#include<stdio.h>
#include<math.h> 
int main(){
	int a,n,dau,giua,cuoi,dem=0;
	scanf("%d",&n);
	cuoi=n%10;
	a=n;  
	while(n!=0){
		dau=n%10;
		n/=10;
		++dem; 
	} 
	giua=a-(dau*pow(10,dem-1)+cuoi); 
	giua=giua/10;
	if(cuoi!=0){ 
	printf("%d%d%d",cuoi,giua,dau);
	}else{
	printf("%d%d",giua,dau); 
		
	} 
}
	
