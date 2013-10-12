// 课堂练习.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

class Shape
{
public:
/*	Shape(char type):type(type){};
	char GetType(){
		return type;
	}
	*/
	virtual void show(){};				//虚函数多态方法，使在主函数调用此函数是，会根据子类名称来选择函数内容，而不是原来的根据参数类型的重载
	virtual float area(){return 0.0}	//要求：需要public继承，子类中此类型函数的名称参数必须一样，但可以不写virtual
protected:
private:
//	char type;
};


class Circle:public Shape
{
public:
	Circle(POINT center)
protected:
private:
};


int main(int argc, char* argv[])
{
	Shape * shape[100];
	shape[0] = new Circle()；



	for
	return 0;
}
