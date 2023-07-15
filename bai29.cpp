#include<stdio.h>
int main(){
	int n,a,sochan=0,sole=0;
	scanf("%d",&n);
	while(n!=0){
		a=n%10;
		n/=10;
		if(a%2==0){
			++sochan;
		}else{
			++sole;
		}
	}
	printf("%d %d",sole,sochan);
}
