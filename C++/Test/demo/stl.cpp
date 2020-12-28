/*----------------------------------------------------------------
// Copyright (C) MickelZhang
// License:MIT
// 文件名：stl.cpp
// 文件功能描述：STL相关
// 创建者：MickelZhang
// 时间：2020/12/21
// 修改人：
// 时间：
// 修改说明：相关链接说明：https://blog.csdn.net/u014465639/article/details/70241850
// 软件版本：VS2015
//----------------------------------------------------------------*/
#include <iostream>
#include <vector>
using namespace std;

/*
容器（Containers）	容器是用来管理某一类对象的集合。C++ 提供了各种不同类型的容器，比如 deque、list、vector、map 等。
		在数据存储上，有一种对象类型，它可以持有其它对象或指向其它对像的指针，这种对象类型就叫做容器。很简单，
		容器就是保存其它对象的对象，当然这是一个朴素的理解，这种“对象”还包含了一系列处理“其它对象”的方法。
		1、顺序容器：是一种各元素之间有顺序关系的线性表，是一种线性结构的可序群集。顺序性容器中的每个元素均有固定的位置，
			除非用删除或插入的操作改变这个位置。顺序容器的元素排列次序与元素值无关，而是由元素添加到容器里的次序决定。
			顺序容器包括：vector(向量)、list（列表）、deque（队列）。
  		2、关联容器：关联式容器是非线性的树结构，更准确的说是二叉树结构。各元素之间没有严格的物理上的顺序关系，
			也就是说元素在容器中并没有保存元素置入容器时的逻辑顺序。但是关联式容器提供了另一种根据元素特点排序的功能，
			这样迭代器就能根据元素的特点“顺序地”获取元素。元素是有序的集合，默认在插入的时候按升序排列。
			关联容器包括：map（集合）、set（映射）、multimap（多重集合）、multiset（多重映射）。
  		3、容器适配器：本质上，适配器是使一种不同的行为类似于另一事物的行为的一种机制。
			容器适配器让一种已存在的容器类型采用另一种不同的抽象类型的工作方式实现。
			适配器是容器的接口，它本身不能直接保存元素，它保存元素的机制是调用另一种顺序容器去实现，
			即可以把适配器看作“它保存一个容器，这个容器再保存所有元素”。
			STL 中包含三种适配器：栈stack 、队列queue 和优先级队列priority_queue 。
			1、vector(需要导入头文件#include <vector>)
			定义和初始化：
			如果没有指定元素的初始化式，那么标准库将自行提供一个元素初始值进行，具体值为何，取决于存储在vector 中元素的数据类型；
			如果为int型数据，那么标准库将用 0 值创建元素初始化式；如果 vector 保存的是含有构造函数的类类型（如 string）的元素，
			标准库将用该类型的默认构造函数创建元素初始化式；元素类型可能是没有定义任何构造函数的类类型。
			这种情况下，标准库仍产生一个带初始值的对象，这个对象的每个成员进行了值初始化。
			vector<int> vec1;    //默认初始化，vec1为空
			vector<int> vec2(vec1);  //使用vec1初始化vec2
			vector<int> vec3(vec1.begin(), vec1.end());//使用vec1初始化vec2
			vector<int> vec4(10);    //10个值为0的元素
			vector<int> vec5(10, 4);  //10个值为4的元素
			vector<string> vec6(10, "null");    //10个值为null的元素
			vector<string> vec7(10, "hello");  //10个值为hello的元素
			vector<vector<Point2f> > points; //定义一个二维数组
			points[0].size();  //指第一行的列数
			操作方法：
			vec1.push_back(100);            //添加元素
			int size = vec1.size();         //元素个数
			bool isEmpty = vec1.empty();    //判断是否为空
			cout << vec1[0] << endl;        //取得第一个元素
			vec1.insert(vec1.end(), 5, 3);    //从vec1.back位置插入5个值为3的元素
			vec1.pop_back();              //删除末尾元素
			vec1.erase(vec1.begin(), vec1.end());//删除之间的元素，其他元素前移
			cout << (vec1 == vec2) ? true : false;  //判断是否相等==、！=、>=、<=...
			vector<int>::iterator iter = vec1.begin();    //获取迭代器首地址
			vector<int>::const_iterator c_iter = vec1.begin();   //获取const类型迭代器
			vec1.clear();                 //清空元素
			遍历容器：
			//下标法(vector的特有访问方法，一般容器只能通过迭代器访问)
			int  length = vec1.size();
			for (int i = 0; i<length; i++)
			{
			cout << vec1[i];
			}
			cout << endl << endl;
			// 迭代器法
			vector< int >::const_iterator iterator = vec1.begin();
			for (; iterator != vec1.end(); iterator++)
			{
			cout << *iterator；
			}

			当vector作为函数参数或者返回值的时候：double Distance(vector<int>&a);  要有&运算符
			vector 相关算法：#include<algorithm> 中将元素翻转reverse, 排序sort

			它与数组十分相似，唯一不同的是，向量在需要扩展大小的时候，
			会自动处理它自己的存储需求
	2.list(需要导入头文件#include <list>)
参考链接：https://www.geeksforgeeks.org/list-cpp-stl/
	 https://blog.csdn.net/lskyne/article/details/10418823
		定义和初始化：
		    list<int> lst1;          //创建空list
		    list<int> lst2(3);       //创建含有三个元素的list
		    list<int> lst3(3,2); //创建含有三个元素的值为2的list
		    list<int> lst4(lst2);    //使用lst2初始化lst4
		    list<int> lst5(lst2.begin(),lst2.end());  //同lst4
	操作方法：
	  lst1.assign(lst2.begin(),lst2.end());  //分配值
	    lst1.push_back(10);                    //添加值
	    lst1.pop_back();                   //删除末尾值
	    lst1.begin();                      //返回首值的迭代器
	    lst1.end();                            //返回尾值的迭代器
	    lst1.clear();                      //清空值
	    bool isEmpty1 = lst1.empty();          //判断为空
	    lst1.erase(lst1.begin(),lst1.end());                        //删除元素
	    lst1.front();                      //返回第一个元素的引用
	    lst1.back();                       //返回最后一个元素的引用
	    lst1.insert(lst1.begin(),3,2);         //从指定位置插入3个值为2的元素
	    lst1.rbegin();                         //返回第一个元素的前向指针
	    lst1.remove(2);                        //相同的元素全部删除
	    lst1.reverse();                        //反转
	    lst1.size();                       //含有元素个数
	    lst1.sort();                       //排序
	    lst1.unique();                         //删除相邻重复元素
	遍历方法：
	//迭代器法
	    list<int>::const_iterator iter = lst1.begin()
	    for(iter; iter != lst1.end(); iter++)
	    {
	       cout<<*iter;
	    }
	    cout<<endl;
	3.deque(需要导入头文件#include <deque>)
参考链接：https://www.cnblogs.com/linuxAndMcu/p/10260124.html
https://www.cnblogs.com/scandy-yuan/archive/2013/01/09/2853603.html
		deque容器类与vector类似，支持随机访问和快速插入删除，它在容器中某一位置上的操作所花费的是线性时间。
		与vector不同的是，deque还支持从开始端插入数据：push_front()。其余类似vector操作方法的使用。
		deque（双端队列）是由一段一段的定量连续空间构成，可以向两端发展，因此不论在尾部或头部安插元素都十分迅速。 
		在中间部分安插元素则比较费时，因为必须移动其它元素。
	定义初始化：
	deque<int> a; // 定义一个int类型的双端队列a
	deque<int> a(10); // 定义一个int类型的双端队列a，并设置初始大小为10
	deque<int> a(10, 1); // 定义一个int类型的双端队列a，并设置初始大小为10且初始值都为1
	deque<int> b(a); // 定义并用双端队列a初始化双端队列b
	deque<int> b(a.begin(), a.begin()+3); // 将双端队列a中从第0个到第2个(共3个)作为双端队列b的初始值
	使用数组来初始化：
	int n[] = { 1, 2, 3, 4, 5 };
	// 将数组n的前5个元素作为双端队列a的初值
	// 说明：当然不包括arr[4]元素，末尾指针都是指结束元素的下一个元素，
	// 这个主要是为了和deque.end()指针统一。
	deque<int> a(n, n + 5); 
	deque<int> a(&n[1], &n[4]); // 将n[1]、n[2]、n[3]作为双端队列a的初值

	容器大小：deq.size();
	容器最大容量：deq.max_size();
	更改容器大小：deq.resize();
	容器判空：deq.empty();
	减少容器大小到满足元素所占存储空间的大小：deq.shrink_to_fit();

	头部添加元素：deq.push_front(const T& x);
	末尾添加元素：deq.push_back(const T& x);
	任意位置插入一个元素：deq.insert(iterator it, const T& x);
	任意位置插入 n 个相同元素：deq.insert(iterator it, int n, const T& x);
	插入另一个向量的 [forst,last] 间的数据：deq.insert(iterator it, iterator first, iterator last);

	头部删除元素：deq.pop_front();
	末尾删除元素：deq.pop_back();
	任意位置删除一个元素：deq.erase(iterator it);
	删除 [first,last] 之间的元素：deq.erase(iterator first, iterator last);
	清空所有元素：deq.clear();

	下标访问：deq[1]; // 并不会检查是否越界
	at 方法访问：deq.at(1); // 以上两者的区别就是 at 会检查是否越界，是则抛出 out of range 异常
	访问第一个元素：deq.front();
	访问最后一个元素：deq.back();

	多个元素赋值：deq.assign(int nSize, const T& x); // 类似于初始化时用数组进行赋值
	交换两个同类型容器的元素：swap(deque&);

	遍历：
	deque<int>::iterator it;
	for (it = deq.begin(); it != deq.end(); it++)
	    cout << *it << endl;
	// 或者
	for (int i = 0; i < deq.size(); i++) {
	    cout << deq.at(i) << endl;
	}

	可以看到，deque 与 vector 的用法基本一致，除了以下几处不同：

	deque 没有 capacity() 函数，而 vector 有；
	deque 有 push_front() 和 pop_front() 函数，而 vector 没有；
	deque 没有 data() 函数，而 vector 有。

	4.map(需要导入头文件#include <map>)
参考链接：https://www.cnblogs.com/fnlingnzb-learner/p/5833051.html
https://blog.csdn.net/shuzfan/article/details/53115922

		C++中map容器提供一个键值对（key/value）容器，map与multimap差别仅仅在于multiple允许一个键对应多个值。
		对于迭代器来说，可以修改实值，而不能修改key。Map会根据key自动排序。
		map 是键－值对的集合。map 类型通常可理解为关联数组：可使用键作为下标来获取一个值，正如内置数组类型一样。
		而关联的本质在于元素的值与某个特定的键相关联，而并非通过元素在数组中的位置来获取。
	定义和初始化：
		map<int,string> map1;                  //空map
		map<k, v>m      	创建一个名为m的空map对象，其键和值的类型分别为k和v
		map<k, v>m(m2)  	创建m2的副本m，m与m2必须有相同的键类型和值类型
		map<k, v>m(b, e)	创建map类型的对象m，存储迭代器b和e标记的范围内所有元素的副本。元素的类型必须能转换为pair<const k, v>
		在使用关联容器时，它的键不但有一个类型，而且还有一个相关的比较函数。
		所用的比较函数必须在键类型上定义严格弱排序（strict weak ordering）：可理解为键类型数据上的“小于”关系，虽然实际上可以选择将比较函数设计得更复杂。
		对于键类型，唯一的约束就是必须支持 < 操作符，至于是否支持其他的关系或相等运算，则不作要求。
		容器类自动申请和释放内存，因此无需new和delete操作。
		map<int, string> ID_Name = {
                { 2015, "Jim" },
                { 2016, "Tom" },
                { 2017, "Bob" } }
	操作方法：
		添加元素有两种方法：1、先用下标操作符获取元素，然后给获取的元素赋值 2、使用insert成员函数实现
		下标操作添加元素：如果该键已在容器中，则 map 的下标运算与 vector 的下标运算行为相同：返回该键所关联的值。
		只有在所查找的键不存在时，map 容器才为该键创建一个新的元素，并将它插入到此 map 对象中。
		此时，所关联的值采用值初始化：类类型的元素用默认构造函数初始化，而内置类型的元素初始化为 0。
	遍历方法：
		map中使用下标存在一个很危险的副作用：如果该键不在 map 容器中，那么下标操作会插入一个具有该键的新元素。
		所以map 容器提供了两个操作：count 和 find，用于检查某个键是否存在而不会插入该键。

	删除操作：
		m.erase(k)	删除m中键为k的元素。返回size_type类型的值，表示删除的元素个数

		m.erase(p)	从m中删除迭代器p所指向的元素。p必须指向m中确实存在的元素，而且不能等于m.end()。返回void

		m.erase(b,e)   从m中删除一段范围内的元素，该范围由迭代器对b和e标记。b和e必须标记m中的一段有效范围：
				即b和e都必须指向m中的元素或最后一个元素的下一个位置。
				而且，b和e要么相等（此时删除的范围为空），要么b所指向的元素必须出在e所
				指向的元素之前。返回 void 类型

	5.set(需要导入头文件#include <set>)
		set的含义是集合，它是一个有序的容器，里面的元素都是排序好的，支持插入，删除，查找等操作，就像一个集合一样。
		所有的操作的都是严格在logn时间之内完成，效率非常高。set和multiset的区别是：set插入的元素不能相同，
		但是multiset可以相同。Set默认自动排序。使用方法类似list。
		set默认是从小到大排列值，定义时set<int,greater<int>> iset;则此时默认是从大到小排列值。
	定义和初始化：
		set 容器的每个键都只能对应一个元素。以一段范围的元素初始化set对象，或在set对象中插入一组元素时，对于每个键，事实上都只添加了一个元素。
	添加元素：
		set<string> set1;
		set1.insert( "the" );  //第一种方法：直接添加
		set< int > iset2;
		iset2.insert(ivec.begin(), ivec.end()); //第二中方法：通过指针迭代器
	获取元素：
		set 容器不提供下标操作符。为了通过键从 set 中获取元素，可使用 find运算。
		如果只需简单地判断某个元素是否存在，同样可以使用 count 运算，返回 set 中该键对应的元素个数。
		当然，对于 set 容器，count 的返回值只能是1（该元素存在）或 0（该元素不存在）。


	存储方式：
	1.vector（向量）：相当于数组，但其大小可以不预先指定，并且自动扩展。它可以像数组一样被操作，
		由于它的特性我们完全可以将vector 看作动态数组。在创建一个vector 后，它会自动在内存中分配一块连续的
		内存空间进行数据存储，初始的空间大小可以预先指定也可以由vector 默认指定，这个大小即capacity （）函数
		的返回值。当存储的数据超过分配的空间时vector 会重新分配一块内存块，但这样的分配是很耗时的，效率非常低。

	2.deque（队列）：它不像vector 把所有的对象保存在一块连续的内存块，而是采用多个连续的存储块，并且在一个
		映射结构中保存对这些块及其顺序的跟踪。向deque 两端添加或删除元素的开销很小，它不需要重新分配空间。
	3.list（列表）：是一个线性链表结构，它的数据由若干个节点构成，每一个节点都包括一个信息块（即实际存储的数据）、
		一个前驱指针和一个后驱指针。它无需分配指定的内存大小且可以任意伸缩，这是因为它存储在非连续的内存空间中，
		并且由指针将有序的元素链接起来。
		4、set, multiset, map, multimap 是一种非线性的树结构，具体的说采用的是一种比较高效的特殊的
	平衡检索二叉树—— 红黑树结构。

	各种容器优劣分析:

	1、Vector：
		优点：
		  A、支持随机访问，访问效率高和方便，它像数组一样被访问，即支持[ ] 操作符和vector.at()。
		  B、节省空间，因为它是连续存储，在存储数据的区域都是没有被浪费的，但是要明确一点vector 大多情况下并不是满存的，在未存储的区域实际是浪费的。
		缺点：
		  A、在内部进行插入、删除操作效率非常低。
		  B、只能在vector 的最后进行push 和pop ，不能在vector 的头进行push 和pop 。
		  C、 当动态添加的数据超过vector 默认分配的大小时要进行内存的重新分配、拷贝与释放，这个操作非常消耗能。

	2、List：
		优点：
		  不使用连续的内存空间这样可以随意地进行动态操作，插入、删除操作效率高；
		缺点：
		  A、不能进行内部的随机访问，即不支持[ ] 操作符和vector.at()，访问效率低。
		  B、相对于verctor 占用更多的内存。

	3、Deque：
		优点：
		  A、支持随机访问，方便，即支持[ ] 操作符和vector.at() ，但性能没有vector 好；
		  B、可以在两端进行push 、pop 。
		缺点：
		  在内部进行插入、删除操作效率低。
		综合：
		    vector 的查询性能最好，并且在末端增加数据也很好，除非它重新申请内存段；适合高效地随机存储。
		list 是一个链表，任何一个元素都可以是不连续的，但它都有两个指向上一元素和下一元素的指针。
		所以它对插入、删除元素性能是最好的，而查询性能非常差；适合 大量地插入和删除操作而不关心随机存取的需求。
		    deque 是介于两者之间，它兼顾了数组和链表的优点，它是分块的链表和多个数组的联合。
		    所以它有被list 好的查询性能，有被vector 好的插入、删除性能。 如果你需要随即存取又关心两端数据的插入和删除，那么deque 是最佳之选。

	4、关联容器的特点是明显的，相对于顺序容器，有以下几个主要特点：
		A， 其内部实现是采用非线性的二叉树结构，具体的说是红黑树的结构原理实现的；
		B， set 和map 保证了元素的唯一性，mulset 和mulmap 扩展了这一属性，可以允许元素不唯一；
		C， 元素是有序的集合，默认在插入的时候按升序排列。

	基于以上特点，
		A， 关联容器对元素的插入和删除操作比vector 要快，因为vector 是顺序存储，而关联容器是链式存储；
			比list 要慢，是因为即使它们同是链式结构，但list 是线性的，而关联容器是二叉树结构，
			其改变一个元素涉及到其它元素的变动比list 要多，并且它是排序的，每次插入和删除都需要对元素重新排序；

		B， 关联容器对元素的检索操作比vector 慢，但是比list 要快很多。vector 是顺序的连续存储，当然是比不上的，
			但相对链式的list 要快很多是因为list 是逐个搜索，它搜索的时间是跟容器的大小成正比，
			而关联容器 查找的复杂度基本是Log(N) ，比如如果有1000 个记录，最多查找10 次，1,000,000 个记录，最多查找20 次。
			容器越大，关联容器相对list 的优越性就越能体现；

		C， 在使用上set 区别于vector,deque,list 的最大特点就是set 是内部排序的，这在查询上虽然逊色于vector ，但是却大大的强于list 。

		D， 在使用上map 的功能是不可取代的，它保存了“键- 值”关系的数据，而这种键值关系采用了类数组的方式。
			数组是用数字类型的下标来索引元素的位置，而map 是用字符型关键字来索引元素的位置。
			在使用上map 也提供了一种类数组操作的方式，即它可以通过下标来检索数据，这是其他容器做不到的，
			当然也包括set 。（STL 中只有vector 和map 可以通过类数组的方式操作元素，即如同ele[1] 方式）。
                                      
算法（Algorithms）	算法作用于容器。它们提供了执行各种操作的方式，包括对容器内容执行初始化、排序、搜索和转换等操作。
相关链接：https://blog.csdn.net/shineHoo/article/details/5736155
	 https://blog.csdn.net/xgf415/article/details/52947454

迭代器（iterators）	迭代器用于遍历对象集合的元素。这些集合可能是容器，也可能是容器的子集。
	 https://blog.csdn.net/zhanh1218/article/details/33340959
	 https://www.cnblogs.com/yc_sunniwell/archive/2010/06/25/1764934.html
	 https://blog.csdn.net/liyuan_669/article/details/22100165
*/

/*-----------------------------------------------------------------
// 输入：
// 输出：
// 功能描述：测试vector
// 作者：MickelZhang
// 日期：2020/12/16
// 修改人：
// 记录：
// 修改人：
// 记录：
// 版本：
-----------------------------------------------------------------*/
void TestForVector()
{
	// 创建一个向量存储 int
	vector<int> vec;
	int i;

	// 显示 vec 的原始大小
	cout << "vector size = " << vec.size() << endl;

	// 推入 5 个值到向量中
	for (i = 0; i < 5; i++) {
		vec.push_back(i);
	}

	// 显示 vec 扩展后的大小
	cout << "extended vector size = " << vec.size() << endl;

	// 访问向量中的 5 个值 索引访问元素
	for (i = 0; i < 5; i++) {
		cout << "value of vec [" << i << "] = " << vec[i] << endl;
	}

	// 使用迭代器 iterator 访问值
	vector<int>::iterator v = vec.begin();
	while (v != vec.end()) {
		cout << "value of v = " << *v << endl;
		v++;
	}
	// for访问vector 使用迭代器
	vector<int>::iterator it;
	for (it=vec.begin(); it!=vec.end(); it++)
	{
		cout<<*it<<endl;
	}
}

// TODO(1223256867@qq.com)
// TODO(MickelZhang)
// TODO(还没有全部完成，需要举例子，验证上面相关内容)
