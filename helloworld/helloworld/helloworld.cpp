#include<iostream>
#include<fstream>

using namespace std;

int main(){
	char name[8],score[6];
	ifstream txtfile;
	txtfile.open("H:\\work\\compiler\\VS2008\\mycode\\helloworld\\helloworld\\out.txt");
	if(!txtfile){
		cerr<<"Error!"<<endl;
		exit(1);
	}
	while(!txtfile.eof()){
		txtfile>>name>>score;
		cout<<name<<'\t'<<score<<endl;
	}
	txtfile.close();
	return 0;
}