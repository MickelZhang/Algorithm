/*----------------------------------------------------------------
// Copyright (C) MickelZhang
// License:MIT
// �ļ�����base_data_type.cpp
// �ļ�����������������������
// �����ߣ�MickelZhang
// ʱ�䣺2020/12/14
// �޸��ˣ�
// ʱ�䣺
// �޸�˵����
// ����汾��VS2015
//----------------------------------------------------------------*/
#include <iostream>
#include <limits>
#include "base_data_type.h"

using namespace std;  // �����ռ�

typedef int renameint;  //�����


// �������������ļ���ʹ�õ���Ҫ��� extern ����ز��Դ���
extern int countnum;
void write_extern(void)
{
	std::cout << "countnum is " << countnum << std::endl;
}



/*-----------------------------------------------------------------
// ���룺
// �����
// ������������������������,��������Ϊ��������ĸ��д���շ����������ʽ
// ���ߣ�MickelZhang
// ���ڣ�2020/12/14
// �޸��ˣ�
// ��¼��
// �޸��ˣ�
// ��¼��
// �汾��
-----------------------------------------------------------------*/
void BaseDataType()
{
	// �鿴�������ʹ�С 2020/12/14
	cout << "type: \t\t" << "************size**************" << endl;
	cout << "bool: \t\t" << "��ռ�ֽ�����" << sizeof(bool);
	cout << "\t���ֵ��" << (numeric_limits<bool>::max)();
	cout << "\t\t��Сֵ��" << (numeric_limits<bool>::min)() << endl;
	cout << "char: \t\t" << "��ռ�ֽ�����" << sizeof(char);
	cout << "\t���ֵ��" << (numeric_limits<char>::max)();
	cout << "\t\t��Сֵ��" << (numeric_limits<char>::min)() << endl;
	cout << "signed char: \t" << "��ռ�ֽ�����" << sizeof(signed char);
	cout << "\t���ֵ��" << (numeric_limits<signed char>::max)();
	cout << "\t\t��Сֵ��" << (numeric_limits<signed char>::min)() << endl;
	cout << "unsigned char: \t" << "��ռ�ֽ�����" << sizeof(unsigned char);
	cout << "\t���ֵ��" << (numeric_limits<unsigned char>::max)();
	cout << "\t\t��Сֵ��" << (numeric_limits<unsigned char>::min)() << endl;
	cout << "wchar_t: \t" << "��ռ�ֽ�����" << sizeof(wchar_t);
	cout << "\t���ֵ��" << (numeric_limits<wchar_t>::max)();
	cout << "\t\t��Сֵ��" << (numeric_limits<wchar_t>::min)() << endl;
	cout << "short: \t\t" << "��ռ�ֽ�����" << sizeof(short);
	cout << "\t���ֵ��" << (numeric_limits<short>::max)();
	cout << "\t\t��Сֵ��" << (numeric_limits<short>::min)() << endl;
	cout << "int: \t\t" << "��ռ�ֽ�����" << sizeof(int);
	cout << "\t���ֵ��" << (numeric_limits<int>::max)();
	cout << "\t��Сֵ��" << (numeric_limits<int>::min)() << endl;
	cout << "unsigned: \t" << "��ռ�ֽ�����" << sizeof(unsigned);
	cout << "\t���ֵ��" << (numeric_limits<unsigned>::max)();
	cout << "\t��Сֵ��" << (numeric_limits<unsigned>::min)() << endl;
	cout << "long: \t\t" << "��ռ�ֽ�����" << sizeof(long);
	cout << "\t���ֵ��" << (numeric_limits<long>::max)();
	cout << "\t��Сֵ��" << (numeric_limits<long>::min)() << endl;
	cout << "unsigned long: \t" << "��ռ�ֽ�����" << sizeof(unsigned long);
	cout << "\t���ֵ��" << (numeric_limits<unsigned long>::max)();
	cout << "\t��Сֵ��" << (numeric_limits<unsigned long>::min)() << endl;
	cout << "double: \t" << "��ռ�ֽ�����" << sizeof(double);
	cout << "\t���ֵ��" << (numeric_limits<double>::max)();
	cout << "\t��Сֵ��" << (numeric_limits<double>::min)() << endl;
	cout << "long double: \t" << "��ռ�ֽ�����" << sizeof(long double);
	cout << "\t���ֵ��" << (numeric_limits<long double>::max)();
	cout << "\t��Сֵ��" << (numeric_limits<long double>::min)() << endl;
	cout << "float: \t\t" << "��ռ�ֽ�����" << sizeof(float);
	cout << "\t���ֵ��" << (numeric_limits<float>::max)();
	cout << "\t��Сֵ��" << (numeric_limits<float>::min)() << endl;
	cout << "size_t: \t" << "��ռ�ֽ�����" << sizeof(size_t);
	cout << "\t���ֵ��" << (numeric_limits<size_t>::max)();
	cout << "\t��Сֵ��" << (numeric_limits<size_t>::min)() << endl;
	cout << "string: \t" << "��ռ�ֽ�����" << sizeof(string) << endl;
	// << "\t���ֵ��" << (numeric_limits<string>::max)() << "\t��Сֵ��" << (numeric_limits<string>::min)() << endl;  
	cout << "type: \t\t" << "************size**************" << endl;

	// typedefʹ��
	renameint value = 9;
	cout << "typedef" << "�����:" << value << endl;

	// ö����������,�õ��ļ��ʲ���
	enum color {red, green, blue};
	enum letter_set { a, d, F, s, T };
	enum year_set { y2000, y2001, y2002, y2003, y2004, y2005 };

	// ������������
	// �ں���������һ��������ڲ������ı����Ǿֲ�����
	// �ں������������������ı�������Ϊ��ʽ����
	// �����к����ⲿ�����ı�����Ϊȫ�ֱ���

}

/*-----------------------------------------------------------------
// ���룺
// �����
// ����������������������Щ
// ���ߣ�MickelZhang
// ���ڣ�2020/12/14
// �޸��ˣ�
// ��¼��
// �޸��ˣ�
// ��¼��
// �汾��
-----------------------------------------------------------------*/
void Constant()
{
	// C++�������������������㳣���������������ַ��������ַ�������
	// 212         // �Ϸ���
	// 215u        // �Ϸ���
	// 0xFeeL      // �Ϸ���
	// 078         // �Ƿ��ģ�8 ���ǰ˽��Ƶ�����
	// 032UU       // �Ƿ��ģ������ظ���׺
	// 85         // ʮ����
	// 0213       // �˽��� 
	// 0x4b       // ʮ������ 
	// 30         // ���� 
	// 30u        // �޷������� 
	// 30l        // ������ 
	// 30ul       // �޷��ų�����
	// ���㳣��
	// 3.14159       // �Ϸ��� 
	// 314159E-5L    // �Ϸ��� 
	// 510E          // �Ƿ��ģ���������ָ��
	// 210f          // �Ƿ��ģ�û��С����ָ��
	// .e55          // �Ƿ��ģ�ȱ�����������
	// bool����
	// true ֵ�����档
	// false ֵ����١�
	// �ַ����� ���ô����󣬿�ѡ����pass��
	// �ַ������� (��˫������)
	// "hello,dear"
	
	// ��ζ��峣��
	// #define
	// const
}

/*-----------------------------------------------------------------
// ���룺
// �����
// ����������C++�еĴ洢����
// ���ߣ�MickelZhang
// ���ڣ�2020/12/14
// �޸��ˣ�
// ��¼��
// �޸��ˣ�
// ��¼��
// �汾��
-----------------------------------------------------------------*/
void Memory()
{
	// C++�еĴ洢��
	// auto  ��������ʱ���ݳ�ʼ�����ʽ�Զ��ƶϸñ��������͡���������ʱ��������ֵ��ռλ��
	auto f = 3.14;  // double
	auto s("hello");  // const char*
	auto z = new auto(9);  // int*
	//auto x1 = 5, x2 = 5.0, x3 = 'r';  // ���󣬱����ǳ�ʼ��Ϊͬһ����

	// register  (�õ��ļ���Ϊ0����Ϊ���漰Ƕ��ʽ�����������������ò���)register �洢�����ڶ���洢�ڼĴ����ж����� RAM �еľֲ�������
	// ����ζ�ű��������ߴ���ڼĴ����Ĵ�С��ͨ����һ���ʣ����Ҳ��ܶ���Ӧ��һԪ�� '&' ���������Ϊ��û���ڴ�λ�ã�
	// �Ĵ���ֻ������Ҫ���ٷ��ʵı������������������Ӧע����ǣ����� 'register' 
	// ������ζ�ű��������洢�ڼĴ����У�����ζ�ű������ܴ洢�ڼĴ����У���ȡ����Ӳ����ʵ�ֵ����ơ�
	// static  �洢��ָʾ�������ڳ�������������ڱ��־ֲ������Ĵ��ڣ�������Ҫ��ÿ����������뿪������ʱ���д��������١�
	// ��ˣ�ʹ�� static ���ξֲ����������ں�������֮�䱣�־ֲ�������ֵ��
	// static ���η�Ҳ����Ӧ����ȫ�ֱ������� static ����ȫ�ֱ���ʱ����ʹ���������������������������ļ��ڡ�
	// �� C++ �У��� static ���������ݳ�Ա��ʱ���ᵼ�½���һ���ó�Ա�ĸ�����������ж�����
	// extern
	// mutable
	// thread_local

}


/*
2020/12/14
C++���Ĵ����ԣ� ��װ�����󣬼̳У���̬
C++11 ������C++��׼  2011��
�����﷨��
����
��
����
��ʱ����
C++�ؼ�������Щ
���ַ��飨�ò�����
�ص�************
��������������
bool
char    unsigned char      signed char
int    short int            long int    unsigned int    signed int
float
double   long double
void
whar_t (�ò���)
ö���������� 
ָ��
�ṹ��
����
����
��
extern ����
�����Ķ��巽���������������淶��
C++�е����η�  signed   unsigned  long  short

C++�е������޶��� 
const�����������ڼ䲻�ܱ��޸ģ� 
volatile ���η� volatile ���߱���������Ҫ�Ż�volatile�����ı�����
		 �ó������ֱ�Ӵ��ڴ��ж�ȡ����������һ��ı�����������Ա��������Ż���
		 ���ڴ��еı���ֵ���ڼĴ������Լӿ��дЧ�ʡ�
restrict �� restrict ���ε�ָ����Ψһһ�ַ�������ָ��Ķ���ķ�ʽ��
		 ֻ��C99 �������µ������޶��� restrict��

*/