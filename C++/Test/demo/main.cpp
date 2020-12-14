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
// ����汾��VS2015
//----------------------------------------------------------------*/
#include <iostream>
#include <limits>
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

// ������
int main()
{
	cout << "hello,world\n";
	cout << "hello,Mickel" << endl;  //endl��\n���һ�� 2020/12/14
	BaseDataType();  // ����������ռ�ռ��С

	int a;  // �ֲ������������ϵͳ�����ʼ������Ҫ��Ϊ��ʼ����ֵ

	while (count_number--)
	{
		TestForStatic();
	}

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