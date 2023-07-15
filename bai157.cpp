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
	for(int i=0;i<n;++i){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n-1;++i){
		for(int j=i+1;j<n;++j){
			if(a[i]>a[j]){
				int tmp=a[i];
				a[i]=a[j];
				a[j]=tmp;
			}
		}
		printf("Buoc %d: ",i+1);
		in(n,a);
	}
	
}
