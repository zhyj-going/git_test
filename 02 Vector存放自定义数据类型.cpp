//#include<iostream>
//using namespace std;
//#include<vector>
//#include<algorithm>
//
////自定义数据类型
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//
//	string m_Name;
//	int m_Age;
//};
//
//void showPrint(Person p)
//{
//	cout << "姓名：" << p.m_Name << "\t年龄：" << p.m_Age << endl;
//}
//
////存放对象
//void test01()
//{
//	Person p1("孙悟空", 20);
//	Person p2("猪八戒", 19);
//	Person p3("沙僧", 18);
//
//	vector<Person> v;
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//
//	////第一种
//	//for (vector<Person>::iterator it = v.begin(); it < v.end(); it++)
//	//{
//	//	//cout << "姓名：" << (*it).m_Name << "\t年龄：" << (*it).m_Name << endl;
//  //  cout << "姓名：" << it->m_Name << "\t年龄：" << it->m_Name << endl;
//	//}
//
//	//第二种 使用STL提供标准遍历算法
//	for_each(v.begin(), v.end(), showPrint);
//
//
//}
//
////存放对象指针
//void test02()
//{
//	Person p1("孙悟空", 20);
//	Person p2("猪八戒", 19);
//	Person p3("沙僧", 18);
//
//	vector<Person*> v;
//
//	v.push_back(&p1);
//	v.push_back(&p2);
//	v.push_back(&p3);
//
//	for (vector<Person*>::iterator it = v.begin(); it < v.end(); it++)
//	{
//		cout << "姓名：" << (*it)->m_Name << "\t年龄：" << (*it)->m_Age << endl;
//	}
//}
//
//int main()
//{
//	//test01();
//	test02();
//
//	system("pause");
//	return 0;
//}