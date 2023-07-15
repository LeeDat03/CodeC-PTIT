#include<stdio.h>

void sap_xep(int n,int a[]){
	for(int i=0;i<n-1;++i){
		for(int j=i+1;j<n;++j){
			if(a[j]<a[i]){
				int x=a[i];
				a[i]=a[j];
				a[j]=x;
			}
		}
	}
}

void nhap(int n,int a[]){
	for(int i=0;i<n;++i) scanf("%d",&a[i]);
}

void in(int n,int a[]){
	for(int i=0;i<n;++i){
		if(a[i]%2==0) printf("%d ",a[i]);
	}
	for(int i=0;i<n;++i){
		if(a[i]%2!=0) printf("%d ",a[i]);
	}
}

int main(){
	int n;
	scanf("%d",&n);
	int a[100];
	nhap(n,a);
	sap_xep(n,a);
	in(n,a);
}
