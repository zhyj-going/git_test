//#include<iostream>
//using namespace std;
//#include<vector>
//#include<algorithm>
//
//
//void myPrint(int val)
//{
//	cout << val << endl;
//}
//
//void test01()
//{
//	//����vector�������󣬲�ͨ��ģ�����ָ�������д�ŵ���������
//	vector<int> v;
//	//�������з�����
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(50);
//
//	//ÿ�����������Լ��ĵ����������������������������е�Ԫ��
//	//v.begin()���ص����������������ָ�������е�һ��Ԫ��
//	//v.end()���ص����������������ָ�����������һ��Ԫ�ص���һ��λ��
//	//vector<int>::iterator �õ�vector<int>���������ĵ�����
//
//	vector<int>::iterator pBegin = v.begin();
//	vector<int>::iterator pEnd = v.end();
//
//	//��һ�ֱ�����ʽ
//	/*while (pBegin != pEnd)
//	{
//		cout << *pBegin << endl;
//		pBegin++;
//	}*/
//
//	//�ڶ��ֱ�����ʽ
//	/*for (vector<int>::iterator it = v.begin(); it < v.end(); it++)
//	{
//		cout << *it << endl;
//	}*/
//
//	//�����ֱ�����ʽ
//	//ʹ��STL�ṩ��׼�����㷨 ͷ�ļ� algorithm
//	for_each(v.begin(), v.end(), myPrint);
//
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}