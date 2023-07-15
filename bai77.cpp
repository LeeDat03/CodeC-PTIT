#include<stdio.h>

int sum(int n){
	int s=0;
	while(n){
		s+=n%10;
		n/=10;
	}
	return s;
}

int tach(int n){
	int s=0;
	for(int i=2;i<=n;++i){
		while(!(n%i)){
			s+=sum(i);
			n/=i;
	
		}
	}
	return s;
}

int main(){
	int n;
	scanf("%d",&n);
	if(tach(n)==sum(n)) printf("YES\n");
	else printf("NO\n");
}
