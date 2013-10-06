#include "stdafx.h"
#include <stdio.h>
#include <iostream>

using namespace std;


int main(){
	int number_of_student=0;
	int Cmd=0;
	Student students[100];

	for(int i= 0 ;i<100;i++){
		students[i].number_of_course = 0;
	}

	while(1){
		cout<<"1.查看所有学生"<<endl;
		cout<<"2.添加学生"<<endl;
		cout<<"3.添加学生科目和成绩"<<endl;
		cout<<"4.删除学生"<<endl;
		cout<<"5.删除学生科目"<<endl;
		cout<<"6.退出程序"<<endl;

		cin>>Cmd;

		if(Cmd == 1){
			List_Student(students,number_of_student);
		}

		else if(Cmd == 2){
			char name[20];
			cout<<"请输入学生姓名：";
			cin>>name;
			Add_Student(students,name,&number_of_student);
		}

		else if(Cmd == 3){
			int number;
			char name[20];
			int mark=0;
			cout<<"请输入学生学号：";
			cin>>number;
			cout<<"请输入科目名称：";
			cin>>name;
			cout<<"请输入课程分数：";
			cin>>mark;
			Add_Course(students,number,name,mark);
		}

		else if(Cmd == 4){
			int number;
			cout<<"请输入学生学号：";
			cin>>number;
			Del_Student(students,number,&number_of_student);
		}

		else if(Cmd == 5){
			int number_student;
			int number_course;
			cout<<"请输入要删除课程的学生编号：";
			cin>>number_student;
			cout<<"及课程编号：";
			cin>>number_course;
			Del_Course(students,number_student,number_course);
		}

		else if(Cmd == 6) {
			return 0;
		}

		else{
			printf("you input a wrong Cmd!input it again\n");
		}
	}
	return 0;
}



