#include<stdio.h>

int ucln(int a,int b){
	if(a%b!=0) return ucln(b,a%b);
	else return b;
}

int together(int a,int b){
	if(ucln(a,b)==1) return 1;
	return 0;
}

int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	for(int i=a;i<b;++i){
		for(int j=i+1;j<=b;++j){
			if(together(i,j)) printf("(%d,%d)\n",i,j);
		}
	}
}
