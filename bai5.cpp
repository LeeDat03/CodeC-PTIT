#include<stdio.h>
int main(){
	int n,a;
	scanf("%d",&n);
	for(int i=1;i<=n;++i){
		scanf("%d",&a);
		printf("%.15lf\n",(double)1/a);
	}
	return 0;
}
