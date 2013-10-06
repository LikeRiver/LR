
#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

typedef struct _course{
	char course_name[20];
	int mark;
	int course_number;
}Course;

typedef struct _student{
	char student_name[20];
	int student_number;
	Course courses[20];
	int number_of_course;
}Student;

//Student students[100];
//int number_of_student=0;

//查看所有学生
//需要学生数量
void List_Student(Student *students,int number_of_student);

//添加学生
//需要学生姓名
//需要现有学生最大数量的地址，学号就是最大数量+1
//现有学生数+1
void Add_Student(Student *students,char * name, int * number_of_student);


//添加学生科目和成绩
//需要学号
//需要科目名称+科目成绩
//该学号的学生的科目数+1
void Add_Course(Student *students,int number,char * name,int mark);


//删除学生
//需要学号
//需要最大学生数
//移动删除后的队列
//学生最大数-1
void Del_Student(Student *students,int number,int *number_of_student);



//删除学生科目
//需要学号
void Del_Course(Student *students,int number_student,int number_course);








