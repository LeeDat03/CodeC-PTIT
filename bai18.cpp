#include<stdio.h>
int main(){
	int m,n;
	scanf("%d",&m);
	for(int i=1;i<=m;++i){
		int dem=0; 
		scanf("%d",&n);
		for(int j=2;j<n;++j){
			if(n%i==0){
				dem=1;
			}
			else{
				dem=0;
			}
		}
		if(dem==1){
				printf("NO\n");
			}else{
				printf("YES\n");
			}
	}
}
