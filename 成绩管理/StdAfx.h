
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

//�鿴����ѧ��
//��Ҫѧ������
void List_Student(Student *students,int number_of_student);

//���ѧ��
//��Ҫѧ������
//��Ҫ����ѧ����������ĵ�ַ��ѧ�ž����������+1
//����ѧ����+1
void Add_Student(Student *students,char * name, int * number_of_student);


//���ѧ����Ŀ�ͳɼ�
//��Ҫѧ��
//��Ҫ��Ŀ����+��Ŀ�ɼ�
//��ѧ�ŵ�ѧ���Ŀ�Ŀ��+1
void Add_Course(Student *students,int number,char * name,int mark);


//ɾ��ѧ��
//��Ҫѧ��
//��Ҫ���ѧ����
//�ƶ�ɾ����Ķ���
//ѧ�������-1
void Del_Student(Student *students,int number,int *number_of_student);



//ɾ��ѧ����Ŀ
//��Ҫѧ��
void Del_Course(Student *students,int number_student,int number_course);








