// stdafx.cpp : source file that includes just the standard includes
//	成绩管理.pch will be the pre-compiled header
//	stdafx.obj will contain the pre-compiled type information

#include "stdafx.h"


//查看所有学生
//需要学生数量
void List_Student(Student *students,int number_of_student){
	for(int n = 1 ; n<=number_of_student ; n++){
		cout<<"姓名:"<<students[n].student_name<<endl;
		cout<<"学号:"<<students[n].student_number<<endl;
		for(int i=1;i<=students[n].number_of_course;i++){
			cout<<"  科目名："<<students[n].courses[i].course_name<<endl;
			cout<<"  学科成绩："<< students[n].courses[i].mark<<endl;
			cout<<"  课程编号："<<students[n].courses[i].course_number<<endl;
		}
	}
}

//添加学生
//需要学生姓名
//需要现有学生最大数量的地址，学号就是最大数量+1
//现有学生数+1
void Add_Student(Student * students,char * name, int * number_of_student){
	(*number_of_student)++;
	strcpy(students[*number_of_student].student_name,name);
	students[*number_of_student].student_number = *number_of_student;

}

//添加学生科目和成绩
//需要学号
//需要科目名称+科目成绩
//该学号的学生的科目数+1
void Add_Course(Student *students,int number,char * name,int mark){
	students[number].number_of_course++;
	strcpy(students[number].courses[students[number].number_of_course].course_name,name);
	students[number].courses[students[number].number_of_course].mark = mark;
	students[number].courses[students[number].number_of_course].course_number = students[number].number_of_course; 
}


//删除学生
//需要学号
//需要最大学生数
//移动删除后的队列
//学生最大数-1
void Del_Student(Student *students,int number,int *number_of_student){
	for (int i = *number_of_student;i > number ; i--){
		students[i-1] = students[i];
	}
	(*number_of_student)--;
}



//删除学生科目
//需要学号
//需要科目编号
void Del_Course(Student *students,int number_student,int number_course){
	for(int i = students[number_student].number_of_course ; i >number_course ; i--){
		students[number_student].courses[i-1] = students[number_student].courses[i]; 
	}
	students[number_student].number_of_course--;

}

