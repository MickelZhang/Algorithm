/*----------------------------------------------------------------
// Copyright (C) MickelZhang
// License:MIT
// 文件名：about_class2.cpp
// 文件功能描述：类的继承，重载
// 创建者：MickelZhang
// 时间：2020/12/20
// 修改人：
// 时间：
// 修改说明：
// 软件版本：VS2015
//----------------------------------------------------------------*/
#include <iostream>
using namespace std;

/*
继承：面向对象程序设计中最重要的一个概念是继承。
		继承允许我们依据另一个类来定义一个类，这使得创建和维护一个应用程序变得更容易。
		这样做，也达到了重用代码功能和提高执行效率的效果。
		当创建一个类时，您不需要重新编写新的数据成员和成员函数，
		只需指定新建的类继承了一个已有的类的成员即可。这个已有的类称为基类，
		新建的类称为派生类。
		继承代表了 is a 关系。
		例如，哺乳动物是动物，狗是哺乳动物，因此，狗是动物，等等。‘’

		// 基类
		class Dog : public Animal {...};


		//派生类
		class Animal {
		// eat() 函数
		// sleep() 函数
		};

		class Dog : public Animal {
		// bark() 函数
		};
		一个类可以派生自多个类，这意味着，它可以从多个基类继承数据和函数。
		定义一个派生类，我们使用一个类派生列表来指定基类。
		类派生列表以一个或多个基类命名
		class derived-class: access-specifier base-class
		其中，访问修饰符 access-specifier 是 public、protected 
		或 private 其中的一个，base-class 是之前定义过的某个类的名称。
		如果未使用访问修饰符 access-specifier，则默认为 private
派生类：派生类可以访问基类中所有的非私有成员。
		因此基类成员如果不想被派生类的成员函数访问，
		则应在基类中声明为 private。
		我们可以根据访问权限总结出不同的访问类型，如下所示：
		访问	   public	protected	private
		同一个类	 yes	yes	        yes
		派生类	     yes	yes	        no
		外部的类	 yes	no	        no
		一个派生类继承了所有的基类方法，但下列情况除外：
			基类的构造函数、析构函数和拷贝构造函数。
			基类的重载运算符。
			基类的友元函数。
		当一个类派生自基类，该基类可以被继承为 public、protected 或 private 几种类型。
		继承类型是通过上面讲解的访问修饰符 access-specifier 来指定的。
		我们几乎不使用 protected 或 private 继承，通常使用 public 继承。
		当使用不同类型的继承时，遵循以下几个规则：
			公有继承（public）：当一个类派生自公有基类时，基类的公有成员也是派生类的公有成员，
								基类的保护成员也是派生类的保护成员，
								基类的私有成员不能直接被派生类访问，
								但是可以通过调用基类的公有和保护成员来访问。
			保护继承（protected）：当一个类派生自保护基类时，
								   基类的公有和保护成员将成为派生类的保护成员。
			私有继承（private）：当一个类派生自私有基类时，
								 基类的公有和保护成员将成为派生类的私有成员。
多继承：
重载：C++ 允许在同一作用域中的某个函数和运算符指定多个定义，
	分别称为函数重载和运算符重载。
	重载声明是指一个与之前已经在该作用域内声明过的函数或方法具有相同名称的声明，
	但是它们的参数列表和定义（实现）不相同。
	当您调用一个重载函数或重载运算符时，
	编译器通过把您所使用的参数类型与定义中的参数类型进行比较，
	决定选用最合适的定义。选择最合适的重载函数或重载运算符的过程，
	称为重载决策。 TODO
	在同一个作用域内，可以声明几个功能类似的同名函数，
	但是这些同名函数的形式参数（指参数的个数、类型或者顺序）必须不同。
	您不能仅通过返回类型的不同来重载函数。


*/

/*-----------------------------------------------------------------
// 功能描述：创建一个Shape基类
// 用法：（也可以举例添加详细的使用方法，或者尽可能描述清楚）
// 作者：MickelZhang
// 日期：2020/12/20
// 修改人：
// 记录：
// 修改人：
// 记录：
// 版本：
-----------------------------------------------------------------*/
class Shape
{
public:
	void setWidth(int w)
	{
		width = w;
	}
	void setHeight(int h)
	{
		height = h;
	}
protected:
	int width;
	int height;
};

// 派生类
class Rectangle : public Shape
{
public:
	int getArea()
	{
		return (width * height);
	}
};

/*-----------------------------------------------------------------
// 功能描述：创建一个Shape，和PaintCost基类
// 用法：（也可以举例添加详细的使用方法，或者尽可能描述清楚）
// 作者：MickelZhang
// 日期：2020/12/20
// 修改人：
// 记录：
// 修改人：
// 记录：
// 版本：
-----------------------------------------------------------------*/
// 基类 Shape
class Shape2
{
public:
	void setWidth(int w)
	{
		width = w;
	}
	void setHeight(int h)
	{
		height = h;
	}
protected:
	int width;
	int height;
};

// 基类 PaintCost
class PaintCost
{
public:
	int getCost(int area)
	{
		return area * 70;
	}
};

// 派生类
class Rectangle : public Shape2, public PaintCost
{
public:
	int getArea()
	{
		return (width * height);
	}
};

//重载
class printData
{
   public:
      void print(int i) {
        cout << "整数为: " << i << endl;
      }
 
      void print(double  f) {
        cout << "浮点数为: " << f << endl;
      }
 
      void print(char c[]) {
        cout << "字符串为: " << c << endl;
      }
};

class Box
{
   public:
 
      double getVolume(void)
      {
         return length * breadth * height;
      }
      void setLength( double len )
      {
          length = len;
      }
 
      void setBreadth( double bre )
      {
          breadth = bre;
      }
 
      void setHeight( double hei )
      {
          height = hei;
      }
      // 重载 + 运算符，用于把两个 Box 对象相加
      Box operator+(const Box& b)
      {
         Box box;
         box.length = this->length + b.length;
         box.breadth = this->breadth + b.breadth;
         box.height = this->height + b.height;
         return box;
      }
   private:
      double length;      // 长度
      double breadth;     // 宽度
      double height;      // 高度
};
