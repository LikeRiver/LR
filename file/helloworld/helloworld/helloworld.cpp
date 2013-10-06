#include<iostream>
#include<fstream>

using namespace std;

int main (){
	char line[180];
	fstream myfile_in;
	ifstream myfile_out;
	//fstream myfile_out;

	myfile_in.open("H:\\work\\compiler\\VS2008\\mycode\\helloworld\\helloworld\\in.txt",ios::out|ios::trunc);
	myfile_out.open("H:\\work\\compiler\\VS2008\\mycode\\helloworld\\helloworld\\out.txt");
	//myfile_out.open("H:\\work\\compiler\\VS2008\\mycode\\helloworld\\helloworld\\in.txt",ios::out|ios::trunc);    //为什么这样不行？

	if((!myfile_in)||(!myfile_out)){
		cerr<<"Error!!!"<<endl;
		exit(1);
	}
	/*while (cin>>line)
		myfile_in<<line;*/
	while(myfile_out.getline(line,180))
		myfile_in<<line<<endl;
	myfile_in.close();
	return 0;


}