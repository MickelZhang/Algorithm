/*----------------------------------------------------------------
// Copyright (C) MickelZhang
// License:MIT
// �ļ�����main.cpp
// �ļ�����������
// �����ߣ�MickelZhang
// ʱ�䣺2020/12/11
// �޸��ˣ�MickelZhang
// ʱ�䣺2020/12/14
// �޸�˵������ӻ�������������صĴ��룬����static
// �޸��ˣ�MickelZhang
// ʱ�䣺2020/12/15
// �޸�˵������2020/12/14��������޸ġ�����
// ����汾��VS2015
//----------------------------------------------------------------*/
#include <iostream>
#include <limits>
#include<string>
#include "base_data_type.h"

using namespace std;  // �����ռ�

// ����static��صĹ���
void TestForStatic(void);

int g;  // ȫ�ֱ����������������ڶ�����Ч�ģ�ȫ�ֱ�����Ĭ�ϸ�����ʼ����ֵ
// ������������ַ���,����һ��Ϊȫ����д�ķ�ʽ
#define LENGHT 10
#define WIDTH 5
const int AREA = 50;
static int count_number = 10; /* ȫ�ֱ��� */

// test for extern
int countnum;
extern void write_extern();

// ������
int main()
{
	cout << "hello,world\n";
	std::cout << "hello,Mickel" << std::endl;  //endl��\n���һ�� 2020/12/14
	//BaseDataType();  // ����������ռ�ռ��С
	string str = "hello";
	cout << str << endl;
	int a = 0;
	cout << "a:"<<a << endl;
	cout << "g:" << g << endl;

	//int a;  // �ֲ������������ϵͳ�����ʼ������Ҫ��Ϊ��ʼ����ֵ�����򱨴�


	// ����static�Ĵ����
	//while (count_number--)
	//{
	//	TestForStatic();
	//}

	//test for extern
	//countnum= 5;
	//write_extern();

	return 0;
}

/*-----------------------------------------------------------------
// ���룺void
// �����
// ��������������static����ع���
// ���ߣ�MickelZhang
// ���ڣ�2020/12/14
// �޸��ˣ�
// ��¼��
// �޸��ˣ�
// ��¼��
// �汾��
-----------------------------------------------------------------*/
void TestForStatic(void)
{
	static int i = 5; // �ֲ���̬����
	i++;
	std::cout << "���� i Ϊ " << i;
	std::cout << " , ���� count Ϊ " << count_number << std::endl;
}