#include<stdio.h>

void in(int n,int a[]){
	for(int i=0;i<n;++i){
		printf("%d ",a[i]);
	}
	printf("\n");
}


int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;++i) scanf("%d",&a[i]);
	for(int i=0;i<n-1;++i){
		int min=i;
		for(int j=i;j<n;++j){
			if(a[min]>a[j]) min=j;
		}
		int tmp=a[min];
		a[min]=a[i];
		a[i]=tmp;
		in(n,a);
	}
}
