#include<stdio.h>
#include<math.h>
int main(){
	int n,a,b;
	scanf("%d",&n);
	for(int i=1;i<=n;++i){
		scanf("%d",&a);
		b=sqrt(a);
		if(b*b==a){
			printf("YES\n"); 
		}else{
			printf("NO\n"); 
		} 
	}
	return 0; 
}
