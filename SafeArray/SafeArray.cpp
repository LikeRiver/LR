// SafeArray.cpp : Defines the entry point for the console application.
//



#include "stdafx.h"
#include <stdio.h>
#include <iostream>

using namespace std;
# define N 100

class SafeArray{
public:
	SafeArray(){}
	int GetArrayItem(int index){	//�涨����-1��ʾ�����±����
		if(index>=0&&index<=N){
			return this->a[index];
		}  
		else return -1;
	}
	int SetArrayItem(int index,int value){
		if(index>=0&&index<=N){
			this->a[index] = value;
			return 0;
		}
		else return -1;
	}
private:
	int a[N];
};


int main(int argc, char* argv[])
{
	int index = 0,value = 0;
	SafeArray * a = new SafeArray();
	//����
	if(a->SetArrayItem(index,value) == -1){
		printf("you input a wrong index");
	}
	//���
	if(a->GetArrayItem(index) == -1){
		printf("you input a wrong index!");
	}
	return 0;
}
