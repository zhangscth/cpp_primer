#include<iostream>
using namespace std;
int main(){
	string str="";
	while((cin>>str)&&str!="END"){
		cout<<"Empty:"<<str.empty()<<endl;
		cout<<"Size:"<<str.size()<<endl;
	}
	return 0;
}
