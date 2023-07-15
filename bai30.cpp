#include<stdio.h>
int main(){
	int m,n,a,sochan,sole;
	scanf("%d",&m);
	for(int h=1;h<=m;++h){
		sochan=0;
		sole=0;
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
	printf("%d %d\n",sole,sochan);
}
}
