#include<stdio.h>
#include<math.h>

int snt(long long n){
	for(int i=2;i<=sqrt(n);++i){
		if(!(n%i)) return 0;
	}
	return 1;
}

int main(){
	int a;
	int dem=0;
	scanf("%d",&a);
	for(int i=2;;++i){
		if(snt(i)){
			++dem;
			printf("%d\n",i);
		}
		if(a==dem) break;
	}
}
