#include<stdio.h>
#include<string.h>
#include<math.h>

int prime(int n){
	for(int i=2;i<=sqrt(n);++i){
		if(!(n%i)) return 0;
	}
	return n>1;
}

int main(){
	int t;
	scanf("%d",&t);
	for(int h=1;h<=t;++h){
		int n;
		scanf("%d",&n);
		int a[n],b[1000];
		memset(b,0,sizeof(b));
		for(int i=0;i<n;++i) scanf("%d",&a[i]), ++b[a[i]];
		for(int i=0;i<n-1;++i){
			for(int j=i+1;j<n;++j){
				if(a[j]<a[i]){
					int x=a[i];
					a[i]=a[j];
					a[j]=x;
				}
			}
		}
		printf("Test %d:\n",h);
		for(int i=0;i<n;++i){
			if(prime(a[i])==1 && b[a[i]]!=0){
				printf("%d xuat hien %d lan\n",a[i],b[a[i]]);
				b[a[i]]=0;
			}
		}
	}
}
