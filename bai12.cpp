#include <stdio.h>
#include <math.h>
int main(){
	float a,b,c,d;
	scanf("%f%f%f",&a,&b,&c);
	d=b*b-4*a*c;
	if(abs(a)<=1000 && abs(b)<= 1000 &abs(c)<1000){
	if(d > 0){
		printf("%.2f %.2f",(-b+sqrt(d))/(2*a),(-b-sqrt(d))/(2*a)); 
	} 
	else if(d==0){
		printf("%.2f",-b/(2*a)); 
	} 
	else{
		printf("NO"); 
	} 
}
	return 0; 
}  
