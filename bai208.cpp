#include<stdio.h>

void in(int n,int a[]){
	for(int i=0;i<n;++i){
		printf("%d ",a[i]);
	}
	printf("\n");
}

int check(int n,int a[]){
	for(int i=0;i<n-1;++i){
		if(a[i]>a[i+1]) return 0;
	}
	return 1;
}

int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;++i) scanf("%d",&a[i]);
	for(int i=n-1;i>=0;--i){
		for(int j=0;j<i;++j){
			if(a[j]>a[j+1]){
				int c=a[j];
				a[j]=a[j+1];
				a[j+1]=c;
			}
		}
		printf("Buoc %d: ",n-i);
		in(n,a);
		if(check(n,a)==1) break;
	}
}
