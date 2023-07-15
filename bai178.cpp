#include<stdio.h>

int min(int a,int b){
	return a<b ? a:b;
}

int main(){
	int n;
	scanf("%d",&n);
	int x=1e9,y=1e9;
	while(n--){
		int a,b;
		scanf("%d%d",&a,&b);
		x=min(x,a);
		y=min(y,b);
	}
	printf("%d",x*y); 
}
