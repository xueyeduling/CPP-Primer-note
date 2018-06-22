//#include <iostream>
//#include <string>
//#include <vector>
//#include <cctype>//被包含在iostream中
//#include <cstddef>//定义数组下标size_t和指针相减ptrdiff_t类型
//#include <iterator>//定义库函数begin和end
//#include <cstring>
//#include <stdexcept>
//#include <exception>
//#include <initializer_list>
//#include <cstdlib> // 定义main函数返回类型EXIT_FAILURE和EXIT_SUCCESS
//#include <cassert> // 定义assert
//#include <fstream>
//#include <sstream>
//#include <list>
//#include <array>
//#include <deque>
//#include <forward_list>
//using std::cout;
//using std::cin;
//using std::endl;
//using std::cerr;
//using std::string;
//using std::vector;
//using std::begin;
//using std::end;
//using std::runtime_error;
//using std::exception;
//using std::initializer_list;
//using std::iostream;
//using std::istream;
//using std::ostream;
//using std::flush;
//using std::ends;
//using std::unitbuf;
//using std::nounitbuf;
//using std::fstream;
//using std::ifstream;
//using std::ofstream;
//using std::stringstream;
//using std::istringstream;
//using std::ostringstream;
//using std::list;
//using std::deque;
//using std::array;
//using std::forward_list;
//
//typedef string::size_type sz;
//
//class Sales_data
//{
//	// 为Sales_data的非成员函数所做的友元声明
//	friend Sales_data add(const Sales_data&, const Sales_data&);
//	friend istream &read(istream&, Sales_data&);
//	friend ostream &print(ostream&, const Sales_data&);
//public:		// 添加了访问说明符
//			// 定义默认构造函数，令其与只接受一个string实参的构造函数功能相同
//	Sales_data(std::string s = "") :bookNo(s) {}
//	Sales_data(const std::string &s, unsigned n, double p) :
//		bookNo(s), units_sold(n), revenue(p*n) {}
//	Sales_data(std::istream&);
//	Sales_data(const Sales_data &sa) { cout << "拷贝构造" << endl; };
//	std::string isbn() const { return bookNo; }
//	Sales_data &combine(const Sales_data&);
//
//private:	// 添加了访问说明符
//	double avg_price() const { return units_sold ? revenue / units_sold : 0; }
//	string bookNo;
//	unsigned units_sold = 0;
//	double revenue = 0.0;
//
//	istream &myread(istream &is)
//	{
//		double price = 0;
//		is >> bookNo >> units_sold >> price;
//		revenue = price*units_sold;
//		return is;
//	}
//
//	ostream &myprint(ostream &os) const
//	{
//		os << isbn() << " " << units_sold << " " << revenue << " " << avg_price();
//		return os;
//	}
//
//	Sales_data myadd(const Sales_data &lhs) const
//	{
//		Sales_data sum = lhs; // 把lhs的数据成员拷贝给sum
//		sum.combine(*this); // 把rhs的数据成员加到sum当中
//		return sum;
//	}
//};
//
//// Sales_data接口的非成员组成部分的声明
//Sales_data add(const Sales_data&, const Sales_data&);
//istream &read(istream&, Sales_data&);
//ostream &print(ostream&, const Sales_data&);
//
//Sales_data& Sales_data::combine(const Sales_data &rhs)
//{
//	units_sold += rhs.units_sold; // 把rhs的成员加到this对象的成员上
//	revenue += rhs.revenue;
//	return *this; // 返回调用该函数的对象
//}
//
//istream &read(istream &is, Sales_data &item)
//{
//	return item.myread(is);
//}
//
//ostream &print(ostream &os, const Sales_data &item)
//{
//	return item.myprint(os);
//}
//
//Sales_data add(const Sales_data &lhs, const Sales_data &rhs)
//{
//	return lhs.myadd(rhs);
//}
//
//Sales_data::Sales_data(std::istream &is)
//{
//	read(is, *this); // read函数的作用是从is中读取一条交易信息然后存入this对象中
//}
//
//class Person
//{
//	int age;
//	string name;
//};
//
//void ex01()
//{
//	//deque<string> container;
//
//	//vector<Person> vecper(10);
//
//	//Person p;
//	////vector<Person> vecper2(p);	// error
//
//	//// 从标准输入读取数据，将每个单词放到容器末尾
//	//string word;
//	//while (cin >> word)
//	//	container.push_back(word);
//
//	//list<int> ilist;
//	////// 将元素添加到ilist开头
//	////for (size_t ix = 0; ix != 4; ++ix)
//	////	ilist.push_front(ix);
//
//	//deque<int> deqi;
//	//cout << deqi.max_size() << endl;
//
//	//vector<string> svec;
//	list<string> slist;
//
//	//// 等价与调用slist.push_front("Hello!");
//	//slist.insert(slist.begin(), "Hello");
//
//	//// vector不支持push_front，但我们可以插入到begin()之前
//	//// 警告：插入到vector末尾之外的任何位置都可能很慢
//	//svec.insert(svec.begin(), "Hello!");
//	//svec.insert(svec.end(), 10, "玄音");
//
//	//vector<string> v = { "渡灵","映辰","玄音","安洛","海棠" };
//	//// 将v的最后两个元素添加到slist的开始位置
//	//slist.insert(slist.begin(), v.end() - 1, v.end());
//	//slist.insert(slist.end(), { "雨瑶","千芷","洛彦","陌寒" });
//	//// 运行时错误：迭代器表示要拷贝的范围，不能指向与目的位置相同的容器
//	//slist.insert(slist.begin(), slist.begin(), slist.end());
//
//	//list<string> lst;
//	//auto iter = lst.begin();
//
//	//string word;
//	//list<string> lst;
//	//auto iter = lst.begin();
//	//while (cin >> word)
//	//	iter = lst.insert(iter, word);	// 等价于调用push_fornt
//	// 这里，while内如果不给iter赋insert的返回值，iter将会在insert后失效
//
//	//for (auto var : lst)
//	//{
//	//	cout << var << endl;
//	//}
//
//	//vector<Sales_data> c;
//	//// 在c的末尾构造一个Sales_data对象
//	//// 使用三个参数的Sales_data构造函数
//	//c.emplace_back("978-0590353403", 25, 15.99);
//	//// 错误：没有接受三个参数的push_back版本
//	////c.push_back("978-0590353403", 25, 15.99);
//	//// 正确：创建一个临时的Sales_data对象传递给push_back
//	//c.push_back(Sales_data("978-0590353403", 25, 15.99));
//	//// 这里会调用两次拷贝构造，由vector内部实现
//
//	//list<Sales_data> c;
//	//c.emplace_back();	// 使用Sales_data的默认构造函数
//	//c.emplace(iter, "999-999999999");	// 使用Sales_data(string)
//	//// 使用Sales_data的接受一个ISBN、一个count和一个price的构造函数
//	//c.emplace_front("978-0590353403", 25, 25.99);
//}
//
//void ex02()
//{
//	vector<int> c;
//	// 在解引用一个迭代器或调用front或back之前检查似乎否有元素
//	if (!c.empty())
//	{
//		// val和val2是c中第一个元素值的拷贝
//		auto val = *c.begin(), val2 = c.front();
//		// val3和val4是c中最后一个元素值的拷贝
//		auto last = c.end();
//		auto val3 = *(--last);	// 不能递减forward_list迭代器
//		auto val4 = c.back();	// forward_list不支持
//	}
//
//	if (!c.empty()) {
//		c.front() = 42;		// 将42赋予c中第一个元素
//		auto &v = c.back();	// 获得指向最后一个元素的引用
//		v = 1024;
//		auto v2 = c.back();	// 改变c中的元素
//		v2 = 0;				// 未改变c中的元素
//	}
//
//	vector<string> svec;	// 空vector
//	cout << svec[0];		// 运行时错误：svec中没有元素
//	cout << svec.at(0);		// 抛出一个out_of_range异常
//}
//
//void ex03()
//{
//	//list<int> ilist;
//	//while (!ilist.empty()) {
//	//	process(ilist.front());	// 对ilist的首元素进行一些处理
//	//	ilist.pop_front();		// 完成处理后删除首元素
//	//}
//
//	list<int> lst = { 0,1,2,3,4,5,6,7,8,9 };
//	auto it = lst.begin();
//	while (it != lst.end())
//		if (*it % 2 == 0)		// 若元素为奇数
//			it = lst.erase(it);	// 删除此元素
//		else
//			++it;
//}
//
//// 9.3.4 特殊的forward_list操作
//void ex04()
//{
//	forward_list<int> flst = { 0,1,2,3,4,5,6,7,8,9 };
//	auto prev = flst.before_begin();		// 表示flst的"首前元素"
//	auto curr = flst.begin();				// 表示flst中的第一个元素
//	while (curr != flst.end()) {			// 仍有元素要处理
//		if (*curr % 2)						// 若元素为奇数
//			curr = flst.erase_after(prev);	// 删除它并移动curr
//		else {
//			prev = curr;					// 移动迭代器curr，指向下一个元素，prev指向curr之前的元素
//			++curr;
//		}
//	}
//
//	for (auto var : flst)
//	{
//		cout << var << endl;
//	}
//}
//
//// 9.3.5 改变容器大小
//void ex05()
//{
//	list<int> ilist(10, 42);	// 10个int: 每个的值都是42
//	ilist.resize(15);			// 将5个值为0的元素添加到ilist的末尾
//	ilist.resize(25, -1);		// 将10个值为-1的元素添加到ilist的末尾
//	ilist.resize(5);			// 从ilist末尾删除20个元素
//}
//
//// 9.3.6 容器操作可能使迭代器失效
//void ex06()
//{
//	//// 傻瓜循环，删除偶元素，复制每个奇数元素
//	//vector<int> vi = { 0,1,2,3,4,5,6,7,8,9 };
//	//auto iter = vi.begin();	// 调用begin而不是cbegin，因为我们要改变vi
//	//while (iter != vi.end()) {
//	//	if (*iter % 2) {
//	//		iter = vi.insert(iter, *iter);	// 复制当前元素
//	//		iter += 2;	// 向前移动迭代器，跳过当前元素以及插入到它之前的元素
//	//	}
//	//	else
//	//		iter = vi.erase(iter);	// 删除偶数元素
//	//		// 不应向前移动迭代器，iter只想我们删除的元素之后的元素
//	//}
//
//	//for (auto var : vi)
//	//{
//	//	cout << var << " ";
//	//}
//	//cout << endl;
//
//	vector<int> v;
//	// 灾难：此循环的行为是未定义的
//	auto begin = v.begin(),
//		end = v.begin();
//	while (begin != end) {
//		// 做一些处理
//		// 插入新值，对begin重新赋值，否则的话它就会失效
//		++begin;	// 向前移动begin，因为我们想在此元素之后插入元素
//		begin = v.insert(begin, 42);
//		++begin;	//  向前移动begin，跳过我们刚刚加入的元素
//	}
//
//	// 更安全的方法：在每个循环步添加/删除元素后重新计算end
//	while (begin != v.end()) {
//		// 做一些处理
//		++begin;	// 向前移动begin，因为我们想在此元素之后插入元素
//		begin = v.insert(begin, 42);	// 插入新值
//		++begin;	// 向前移动begin，跳过我们刚刚加入的元素
//	}
//}
//
//void pluralize(size_t cnt, string &word)
//{
//	if (cnt > 1)
//		word.push_back('s');	// 等价于word += 's'
//}
//
//int main()
//{
//	//ex01();
//
//	//ex02();
//
//	//ex04();
//
//	//ex06();
//
//	system("pause");
//	return 0;
//}