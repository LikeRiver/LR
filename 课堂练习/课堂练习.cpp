// ������ϰ.cpp : Defines the entry point for the console application.
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
	virtual void show(){};				//�麯����̬������ʹ�����������ô˺����ǣ����������������ѡ�������ݣ�������ԭ���ĸ��ݲ������͵�����
	virtual float area(){return 0.0}	//Ҫ����Ҫpublic�̳У������д����ͺ��������Ʋ�������һ���������Բ�дvirtual
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
	shape[0] = new Circle()��



	for
	return 0;
}
