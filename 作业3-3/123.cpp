// 123.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

class Person(){
public:
	char profession[20];
	void eat();
	void sleep();
	int GetAge();
private:
	int age;
}

class Student :public Person(){
public:
	void think();
	void exam();
}

class Teacher:public Person(){
	void teaching();

}

class CourseRep:public Student(){
	void collect_homework();

}

int main(int argc, char* argv[])
{
	return 0;
}
