#include<stdio.h>
//
//8 2			8 2
//1 6			6 1
//7 6			7 6
//

int main(){
	int a[6];
	int b[10001];
	for(int i=0;i<6;++i) scanf("%d",&a[i]);
	for(int i=0;i<6;++i) ++b[a[i]];
	int vt1=0,vt2=0,tmp=0,tmp1=0;
	for(int i=0;i<6;++i){
		if(b[a[i]]==2){
			vt2=vt1;
			vt1=i;
			tmp=vt2;
		} 
	}
	int max=-1e9,vt0=0;
	for(int i=0;i<6;++i){
		if(a[i]>max) max=a[i],vt0=i,tmp1=vt0;
	}
	if(vt1%2==0) vt1+=1;
	else vt1-=1;
	if(vt2%2==0) vt2+=1;
	else vt2-=1;
	if(vt0%2==0) vt0+=1;
	else vt0-=1;
	if(max==a[vt2]+a[vt1] && max==a[tmp1]+a[tmp]) printf("YES");
	else printf("NO");	
}
