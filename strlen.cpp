#include<iostream>
using namespace std;
int getStrLen(char *);
int main(){
	char str[10]="hello";
	int len=0;
	len=getStrLen(str);
	cout<<str<<" length "<<len<<endl;
	return 0;
}

int getStrLen(char * str){
	int len=0;
	while((*str)!='\0'){
		str++;
		len++;
	}
	return len;
}
