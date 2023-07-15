#include<stdio.h>

int main(){
	int n,cout=0;
	scanf("%d",&n);
	if(n==1) printf("No");
	else if(n<=3) printf("Yes");
	else{
		int a,b;
		scanf("%d%d",&a,&b);
		int x=a,y=b;
		for(int i=1;i<=n-2;++i){
			int c,d;
			scanf("%d%d",&c,&d);
			if(x==c || x==d) ++cout;
			else if(y==c || y==d) ++cout; 
			}
		if(cout==n-2) printf("Yes");
		else printf("No");
	}
	return 0;
}
