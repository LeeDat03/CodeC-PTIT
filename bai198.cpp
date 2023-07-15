#include<stdio.h>
#include<math.h>

int max(int a,int b){
	return a>b ? a:b;
}

int min(int a,int b){
	return a<b ? a:b;
}

int main(){
	int x1,x2,x3,x4,y1,y2,y3,y4;
	scanf("%d%d%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
	int a1=max(x1,max(x2,max(x3,x4)));
	int a2=min(x1,min(x2,min(x3,x4)));
	int b1=max(y1,max(y2,max(y3,y4)));
	int b2=min(y1,min(y2,min(y3,y4)));
//	printf("%d %d %d %d",a1,a2,b1,b2);
	if(abs(a1-a2)>=abs(b1-b2)) printf("%d",(a1-a2)*(a1-a2));
	else  printf("%d",(b1-b2)*(b1-b2));
}
