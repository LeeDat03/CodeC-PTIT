#include<stdio.h>
#include<string.h>

int main(){
	char c[1000],word[100];
	gets(c);
	gets(word);
	char *t=strtok(c," ");
	while(t!=NULL){
		if(strcmp(t,word) !=0){
			printf("%s ",t);
		}
		t = strtok(NULL," ");
	}
}
