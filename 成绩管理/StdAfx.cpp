// stdafx.cpp : source file that includes just the standard includes
//	�ɼ�����.pch will be the pre-compiled header
//	stdafx.obj will contain the pre-compiled type information

#include "stdafx.h"


//�鿴����ѧ��
//��Ҫѧ������
void List_Student(Student *students,int number_of_student){
	for(int n = 1 ; n<=number_of_student ; n++){
		cout<<"����:"<<students[n].student_name<<endl;
		cout<<"ѧ��:"<<students[n].student_number<<endl;
		for(int i=1;i<=students[n].number_of_course;i++){
			cout<<"  ��Ŀ����"<<students[n].courses[i].course_name<<endl;
			cout<<"  ѧ�Ƴɼ���"<< students[n].courses[i].mark<<endl;
			cout<<"  �γ̱�ţ�"<<students[n].courses[i].course_number<<endl;
		}
	}
}

//���ѧ��
//��Ҫѧ������
//��Ҫ����ѧ����������ĵ�ַ��ѧ�ž����������+1
//����ѧ����+1
void Add_Student(Student * students,char * name, int * number_of_student){
	(*number_of_student)++;
	strcpy(students[*number_of_student].student_name,name);
	students[*number_of_student].student_number = *number_of_student;

}

//���ѧ����Ŀ�ͳɼ�
//��Ҫѧ��
//��Ҫ��Ŀ����+��Ŀ�ɼ�
//��ѧ�ŵ�ѧ���Ŀ�Ŀ��+1
void Add_Course(Student *students,int number,char * name,int mark){
	students[number].number_of_course++;
	strcpy(students[number].courses[students[number].number_of_course].course_name,name);
	students[number].courses[students[number].number_of_course].mark = mark;
	students[number].courses[students[number].number_of_course].course_number = students[number].number_of_course; 
}


//ɾ��ѧ��
//��Ҫѧ��
//��Ҫ���ѧ����
//�ƶ�ɾ����Ķ���
//ѧ�������-1
void Del_Student(Student *students,int number,int *number_of_student){
	for (int i = *number_of_student;i > number ; i--){
		students[i-1] = students[i];
	}
	(*number_of_student)--;
}



//ɾ��ѧ����Ŀ
//��Ҫѧ��
//��Ҫ��Ŀ���
void Del_Course(Student *students,int number_student,int number_course){
	for(int i = students[number_student].number_of_course ; i >number_course ; i--){
		students[number_student].courses[i-1] = students[number_student].courses[i]; 
	}
	students[number_student].number_of_course--;

}

