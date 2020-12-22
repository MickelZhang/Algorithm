﻿/*----------------------------------------------------------------
// Copyright (C) MickelZhang
// License:MIT
// 文件名：about_class.cpp
// 文件功能描述：菜鸟教程类，面向对象
// 创建者：MickelZhang
// 时间：2020/12/17
// 修改人：MickelZhang
// 时间：2020/12/22
// 修改说明：文件功能描述详细：类&面向对象
// 软件版本：VS2015
//----------------------------------------------------------------*/
#include <iostream>
using namespace std;
/*
类定义是以关键字 class 开头，后跟类的名称。类的主体是包含在一对花括号中。
类定义后必须跟着一个分号或一个声明列表。
类的成员函数：类的成员函数是指那些把定义和原型写在类定义内部的函数，就像类定义中的其他变量一样。
             类成员函数是类的一个成员，它可以操作类的任意对象，可以访问对象中的所有成员。
             成员函数可以定义在类定义内部，或者单独使用范围解析运算符 :: 来定义。在类定义中定义的成员函数把函数声明为内联的，
             即便没有使用 inline 标识符
             使用范围解析运算符 ::定义函数
             
类访问修饰符：数据封装是面向对象编程的一个重要特点，它防止函数直接访问类类型的内部成员。
             类成员的访问限制是通过在类主体内部对各个区域标记 public、private、protected 来指定的。
             关键字 public、private、protected 称为访问修饰符。
             公有成员在程序中类的外部是可访问的
             私有成员变量或函数在类的外部是不可访问的，甚至是不可查看的。只有类和友元函数可以访问私有成员。
             默认情况下，类的所有成员都是私有的，（没有private时候，也是私有的，默认私有）
             protected（受保护）成员变量或函数与私有成员十分相似，但有一点不同，
             protected（受保护）成员在派生类（即子类）中是可访问的。
             继承方式：
             1.public 继承：基类 public 成员，protected 成员，private 成员的访问属性在派生类中分别变成：public, protected, private
             2.protected 继承：基类 public 成员，protected 成员，private 成员的访问属性在派生类中分别变成：protected, protected, private
             3.private 继承：基类 public 成员，protected 成员，private 成员的访问属性在派生类中分别变成：private, private, private
             4.private 成员只能被本类成员（类内）和友元访问，不能被派生类访问；
             5.protected 成员可以被派生类访问。
             
构造函数：类的构造函数是类的一种特殊的成员函数，它会在每次创建类的新对象时执行。
                  构造函数的名称与类的名称是完全相同的，并且不会返回任何类型，
                  也不会返回 void。构造函数可用于为某些成员变量设置初始值。
                  可定义不带参数和带参数的构造函数 默认的构造函数没有任何参数，但如果需要，构造函数也可以带有参数。
                  这样在创建对象时就会给对象赋初始值
                  构造函数可以使用初始化列表来初始化字段
                  
析构函数：类的析构函数是类的一种特殊的成员函数，它会在每次删除所创建的对象时执行。                  
         析构函数的名称与类的名称是完全相同的，只是在前面加了个波浪号（~）作为前缀，它不会返回任何值，
         也不能带有任何参数。析构函数有助于在跳出程序（比如关闭文件、释放内存等）前释放资源。

C++拷贝构造函数：是一种特殊的构造函数，它在创建对象时，是使用同一类中之前创建的对象来初始化新创建的对象
                通过使用另一个同类型的对象来初始化新创建的对象。
                复制对象把它作为参数传递给函数。
                复制对象，并从函数返回这个对象。
                如果在类中没有定义拷贝构造函数，编译器会自行定义一个。如果类带有指针变量，
                并有动态内存分配，则它必须有一个拷贝构造函数。
                形式：
                classname (const classname &obj) {
                   // 构造函数的主体
                }

C++友元函数：类的友元函数是定义在类外部，但有权访问类的所有私有（private）成员和保护（protected）成员。
            尽管友元函数的原型有在类的定义中出现过，但是友元函数并不是成员函数。
            友元可以是一个函数，该函数被称为友元函数；友元也可以是一个类，该类被称为友元类，在这种情况下，整个类及其所有成员都是友元。
            如果要声明函数为一个类的友元，需要在类定义中该函数原型前使用关键字 friend （友元函数暂时用不到，pass）
            
C++内联函数：是通常与类一起使用。如果一个函数是内联的，那么在编译时，编译器会把该函数的代码副本放置在每个调用该函数的地方。
            对内联函数进行任何修改，都需要重新编译函数的所有客户端，因为编译器需要重新更换一次所有的代码，否则将会继续使用旧的函数。
            如果想把一个函数定义为内联函数，则需要在函数名前面放置关键字 inline，在调用函数之前需要对函数进行定义。
            如果已定义的函数多于一行，编译器会忽略 inline 限定符。
            在类定义中的定义的函数都是内联函数，即使没有使用 inline 说明符。 (内联函数也pass)
            
C++中this指针：在 C++ 中，每一个对象都能通过 this 指针来访问自己的地址。this 指针是所有成员函数的隐含参数。
              因此，在成员函数内部，它可以用来指向调用对象。
              友元函数没有 this 指针，因为友元不是类的成员。只有成员函数才有 this 指针。
              
C++中指向类的指针：一个指向 C++ 类的指针与指向结构的指针类似，访问指向类的指针的成员，需要使用成员访问运算符 ->，
                  就像访问指向结构的指针一样。与所有的指针一样，您必须在使用指针之前，对指针进行初始化。

C++类的静态成员变量：使用 static 关键字来把类成员定义为静态的。
				当我们声明类的成员为静态时，这意味着无论创建多少个类的对象，
				静态成员都只有一个副本。
                静态成员在类的所有对象中是共享的。
				如果不存在其他的初始化语句，在创建第一个对象时，
				所有的静态数据都会被初始化为零。
                我们不能把静态成员的初始化放置在类的定义中，
				但是可以在类的外部通过使用范围解析运算符 :: 
				来重新声明静态变量从而对它进行初始化。
C++类的静态成员函数：如果把函数成员声明为静态的，
		就可以把函数与类的任何特定对象独立开来。
		静态成员函数即使在类对象不存在的情况下也能被调用，
		静态函数只要使用类名加范围解析运算符 :: 就可以访问。
		静态成员函数只能访问静态成员数据、其他静态成员函数和类外部的其他函数。
		静态成员函数有一个类范围，他们不能访问类的 this 指针。
		您可以使用静态成员函数来判断类的某些对象是否已被创建。

*/

/*-----------------------------------------------------------------
// 功能描述：创建一个Box的类
// 用法：（也可以举例添加详细的使用方法，或者尽可能描述清楚）
// 作者：MickelZhang
// 日期：2020/12/18
// 修改人：MickelZhang 2020/12/12
// 记录：
// 修改人：
// 记录：
// 版本：
-----------------------------------------------------------------*/
class Box
{
 /*
 用法：
 Box box1; //实例化对象
 Box box2; //实例化对象
 double volume = 0.0;     // 用于存储体积
 Box1.height = 5.0;  // 通过. 来访问数据和方法
 Box1.length = 6.0; 
 Box1.breadth = 7.0;
 volume = Box1.height * Box1.length * Box1.breadth;
 cout << "Box1 的体积：" << volume <<endl;
 
 Box3.set(16.0, 8.0, 12.0); 
 volume = Box3.get(); 
 cout << "Box3 的体积：" << volume <<endl; 
 */
  public:
    double length; //盒子的长度
    double breadth; //盒子的宽度
    double height; //盒子的高度
    double get(void); // 成员函数声明
    void set(double len, double bre,double hei); // 成员函数声明
  private:
    double perimeter; //私有变量 周长
  protected:
    double area; // 受保护成员 面积
};

/*-----------------------------------------------------------------
// 输入：
// 输出：
// 功能描述：类中成员函数的定义部分，求体积
// 作者：MickelZhang
// 日期：2020/12/18
// 修改人：
// 记录：
// 修改人：
// 记录：
// 版本：
-----------------------------------------------------------------*/
double Box::get(void)
{
    return length * breadth * height;
}
 
/*-----------------------------------------------------------------
// 输入：
// 输出：
// 功能描述：类中成员函数的定义部分，对长宽高的赋值设置
// 作者：MickelZhang
// 日期：2020/12/18
// 修改人：
// 记录：
// 修改人：
// 记录：
// 版本：
-----------------------------------------------------------------*/
void Box::set( double len, double bre, double hei)
{
    length = len;
    breadth = bre;
    height = hei;
}

/*-----------------------------------------------------------------
// 输入：
// 输出：
// 功能描述：测试Box类，使用方法等
// 作者：MickelZhang
// 日期：2020/12/18
// 修改人：
// 记录：
// 修改人：
// 记录：
// 版本：
-----------------------------------------------------------------*/
void TestForBoxClass()
{
 Box box1; //实例化对象
 Box box2; //实例化对象
 double volume = 0.0;     // 用于存储体积
 box1.height = 5.0;  // 通过. 来访问数据和方法
 box1.length = 6.0;
 box1.breadth = 7.0;
 volume = box1.height * box1.length * box1.breadth;
 cout << "Box1 的体积：" << volume <<endl;
 
 box2.set(16.0, 8.0, 12.0);
 volume = box2.get();
 cout << "Box2 的体积：" << volume <<endl; 
}

/*-----------------------------------------------------------------
// 功能描述：创建一个Line的类
// 用法：（也可以举例添加详细的使用方法，或者尽可能描述清楚）
// 作者：MickelZhang
// 日期：2020/12/18
// 修改人：MickelZhang 2020/12/18
// 记录：
// 修改人：
// 记录：
// 版本：
-----------------------------------------------------------------*/
class Line
{
   public:
      double getLength( void );
	  void setLength(double len);
      Line();  // 这是构造函数声明
      ~Line();  // 这是析构函数声明
 
   private:
      double length;
};

/*-----------------------------------------------------------------
// 输入：
// 输出：
// 功能描述：构造函数的定义
// 作者：MickelZhang
// 日期：2020/12/18
// 修改人：
// 记录：
// 修改人：
// 记录：
// 版本：
-----------------------------------------------------------------*/
Line::Line(void)
{
  cout << "Object is being created" << endl;
}

/*-----------------------------------------------------------------
// 输入：
// 输出：
// 功能描述：析构函数的定义
// 作者：MickelZhang
// 日期：2020/12/18
// 修改人：
// 记录：
// 修改人：
// 记录：
// 版本：
-----------------------------------------------------------------*/
Line::~Line(void)
{
    cout << "Object is being deleted" << endl;
}

/*-----------------------------------------------------------------
// 输入：
// 输出：
// 功能描述：成员函数的定义
// 作者：MickelZhang
// 日期：2020/12/18
// 修改人：
// 记录：
// 修改人：
// 记录：
// 版本：
-----------------------------------------------------------------*/
double Line::getLength( void )
{
    return length;
}

void Line::setLength(double len) //也可在类的内部进行函数的定义，此时也称之为内联函数,但是类内部定义之后，外部访问不能访问
{
	length = len;
}
/*-----------------------------------------------------------------
// 输入：
// 输出：
// 功能描述：测试Line类,构造函数和析构函数
// 作者：MickelZhang
// 日期：2020/12/18
// 修改人：
// 记录：
// 修改人：
// 记录：
// 版本：
-----------------------------------------------------------------*/
void TestForLineClass()
{
   Line line;
   // 设置长度
   line.setLength(6.0); 
   cout << "Length of line : " << line.getLength() <<endl;
}

/*-----------------------------------------------------------------
// 功能描述：创建一个Line2的类,主要是实现拷贝构造函数
// 用法：（也可以举例添加详细的使用方法，或者尽可能描述清楚）
// 作者：MickelZhang
// 日期：2020/12/18
// 修改人：MickelZhang 2020/12/18
// 记录：
// 修改人：
// 记录：
// 版本：
-----------------------------------------------------------------*/
class Line2
{
   public:
      int getLength(void);
      Line2( int len );             // 简单的构造函数
      Line2( const Line2 &obj);      // 拷贝构造函数
      ~Line2();                     // 析构函数
 
   private:
      int *ptr;
};
 
// 成员函数定义，包括构造函数
Line2::Line2(int len)
{
    cout << "调用构造函数" << endl;
    // 为指针分配内存
    ptr = new int;
    *ptr = len;
}
// 拷贝构造函数
Line2::Line2(const Line2 &obj)
{
    cout << "调用拷贝构造函数并为指针 ptr 分配内存" << endl;
    ptr = new int;
    *ptr = *obj.ptr; // 拷贝值
}
// 析构函数
Line2::~Line2(void)
{
    cout << "释放内存" << endl;
    delete ptr;
}
// 成员函数
int Line2::getLength( void )
{
    return *ptr;
}
// 有点不清楚
void display(Line2 obj)
{
   cout << "line 大小 : " << obj.getLength() <<endl;
}

void TestForLine2Class()
{
   Line2 line1(10);
 
   Line2 line2 = line1; // 这里也调用了拷贝构造函数
 
   display(line1);
   display(line2);
}

/*-----------------------------------------------------------------
// 功能描述：友元函数和友元类的创建和使用
// 用法：（也可以举例添加详细的使用方法，或者尽可能描述清楚）
// 作者：MickelZhang
// 日期：2020/12/18
// 修改人：MickelZhang 2020/12/18
// 记录：TODO暂时先不写，因为目前还用不到 友元函数目前用不到
// 修改人：
// 记录：
// 版本：
-----------------------------------------------------------------*/





/*-----------------------------------------------------------------
// 功能描述：内联函数的使用
// 用法：（也可以举例添加详细的使用方法，或者尽可能描述清楚）
// 作者：MickelZhang
// 日期：2020/12/18
// 修改人：MickelZhang 2020/12/18
// 记录：
// 修改人：
// 记录：
// 版本：
-----------------------------------------------------------------*/
inline int MaxValue(int x, int y)
{
  /*使用方法：和正常的函数调用一样*/
  return (x > y)? x : y;
}


/*-----------------------------------------------------------------
// 功能描述：this指针的使用
// 用法：（也可以举例添加详细的使用方法，或者尽可能描述清楚）
// 作者：MickelZhang
// 日期：2020/12/18
// 修改人：MickelZhang 2020/12/18
// 记录：
// 修改人：
// 记录：
// 版本：
-----------------------------------------------------------------*/
class Box2
{
   public:
      // 构造函数定义
      Box2(double l=2.0, double b=2.0, double h=2.0)
      {
         cout <<"Constructor called." << endl;
         length = l;
         breadth = b;
         height = h;
      }
      double Volume()
      {
         return length * breadth * height;
      }
      int compare(Box2 box)
      {
         return this->Volume() > box.Volume();
      }
   private:
      double length;     // Length of a box
      double breadth;    // Breadth of a box
      double height;     // Height of a box
};

void TestForThePointerOfThis()
{
   Box2 Box1(3.3, 1.2, 1.5);    // Declare box1
   Box2 Box2(8.5, 6.0, 2.0);    // Declare box2
 
   if(Box2.compare(Box2))
   {
      cout << "Box2 is smaller than Box1" <<endl;
   }
   else
   {
      cout << "Box2 is equal to or larger than Box1" <<endl;
   }
}


/*-----------------------------------------------------------------
// 功能描述：指向类的指针
// 用法：（也可以举例添加详细的使用方法，或者尽可能描述清楚）
// 作者：MickelZhang
// 日期：2020/12/18
// 修改人：MickelZhang 2020/12/18
// 记录：
// 修改人：
// 记录：
// 版本：
-----------------------------------------------------------------*/
class Box3
{
   public:
      // 构造函数定义
      Box3(double l=2.0, double b=2.0, double h=2.0)
      {
         cout <<"Constructor called." << endl;
         length = l;
         breadth = b;
         height = h;
      }
      double Volume()
      {
         return length * breadth * height;
      }
   private:
      double length;     // Length of a box
      double breadth;    // Breadth of a box
      double height;     // Height of a box
};

void TestForPointerOfPointClass()
{
   Box3 Box1(3.3, 1.2, 1.5);    // Declare box1
   Box3 Box2(8.5, 6.0, 2.0);    // Declare box2
   Box3 *ptrBox;                // Declare pointer to a class.

   // 保存第一个对象的地址
   ptrBox = &Box1;

   // 现在尝试使用成员访问运算符来访问成员
   cout << "Volume of Box1: " << ptrBox->Volume() << endl;

   // 保存第二个对象的地址
   ptrBox = &Box2;

   // 现在尝试使用成员访问运算符来访问成员
   cout << "Volume of Box2: " << ptrBox->Volume() << endl;
}

/*-----------------------------------------------------------------
// 功能描述：类的静态成员变量和静态成员函数
// 用法：（也可以举例添加详细的使用方法，或者尽可能描述清楚）
// 作者：MickelZhang
// 日期：2020/12/18
// 修改人：MickelZhang 2020/12/18
// 记录：
// 修改人：
// 记录：
// 版本：
-----------------------------------------------------------------*/
class Box4
{
public:
	static int objectCount;
	// 构造函数定义
	Box4(double l = 2.0, double b = 2.0, double h = 2.0)
	{
		cout << "Constructor called." << endl;
		length = l;
		breadth = b;
		height = h;
		// 每次创建对象时增加 1
		objectCount++;
	}
	double Volume()
	{
		return length * breadth * height;
	}
private:
	double length;     // 长度
	double breadth;    // 宽度
	double height;     // 高度
};

// 静态成员函数
class Box5
{
public:
	static int objectCount;
	// 构造函数定义
	Box5(double l = 2.0, double b = 2.0, double h = 2.0)
	{
		cout << "Constructor called." << endl;
		length = l;
		breadth = b;
		height = h;
		// 每次创建对象时增加 1
		objectCount++;
	}
	double Volume()
	{
		return length * breadth * height;
	}
	static int getCount()
	{
		return objectCount;
	}
private:
	double length;     // 长度
	double breadth;    // 宽度
	double height;     // 高度
};

