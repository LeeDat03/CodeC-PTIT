#include<stdio.h>

int check(int a,int b,int c,int d){
	if(c-a==d-b) return 1;
	return 0;
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int a,b,c,d;
		scanf("%d%d%d%d",&a,&b,&c,&d);
		if(check(a,b,c,d)) printf("YES\n");
		else printf("NO\n");
	}
}

