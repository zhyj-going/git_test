//#include<iostream>
//using namespace std;
//#include<vector>
//#include<algorithm>
//
////�Զ�����������
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
//	cout << "������" << p.m_Name << "\t���䣺" << p.m_Age << endl;
//}
//
////��Ŷ���
//void test01()
//{
//	Person p1("�����", 20);
//	Person p2("��˽�", 19);
//	Person p3("ɳɮ", 18);
//
//	vector<Person> v;
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//
//	////��һ��
//	//for (vector<Person>::iterator it = v.begin(); it < v.end(); it++)
//	//{
//	//	//cout << "������" << (*it).m_Name << "\t���䣺" << (*it).m_Name << endl;
//  //  cout << "������" << it->m_Name << "\t���䣺" << it->m_Name << endl;
//	//}
//
//	//�ڶ��� ʹ��STL�ṩ��׼�����㷨
//	for_each(v.begin(), v.end(), showPrint);
//
//
//}
//
////��Ŷ���ָ��
//void test02()
//{
//	Person p1("�����", 20);
//	Person p2("��˽�", 19);
//	Person p3("ɳɮ", 18);
//
//	vector<Person*> v;
//
//	v.push_back(&p1);
//	v.push_back(&p2);
//	v.push_back(&p3);
//
//	for (vector<Person*>::iterator it = v.begin(); it < v.end(); it++)
//	{
//		cout << "������" << (*it)->m_Name << "\t���䣺" << (*it)->m_Age << endl;
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