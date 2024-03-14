#include <iostream>
#include <string>
#include <vector>

using namespace std;

void _return(char i,int o)
{
	//char i3 = i - 'a';//char转int 
	//char i2[27];
	vector<char> a(26);
	vector<char> b;//vector<T> v4(n)	v3 中包含了 n 个默认值初始化的元素
	for (int c = 0; c <26; c++)
	{
		//a.push_back('a' + c);//给出了28个空容量但是却在空容量后面加入了新容量合数据
		a[c] = 'a' + c;
		b.push_back('A' + c);
		//i2[c] = 'a' + c;

	}
	int i1 = '26';
	vector<char>::iterator it;
	if (i >= 'a' && i <= 'z')
		it = a.begin(); 
	else
		it = b.begin(); 
	for(int o2=0;o2<o;o2++)
	{						//A-’a‘=-32；转化为int的-32
		cout <<*(it + ((i-*it+o2)%26) ) << endl;//双重转换 char转int int再转指针
	}
	
	
	//if (i >= 'a' && i <= 'z')
	//{
		//it = a.begin();  //begin()函数只认int类加
		//cout << i2[i-i2[0]+o] <<endl;
		//cout << *(it = it + o) << endl;//指针转换

		/*cout << i3 <<endl；

		while(it != a.begin()+o)
			cout << *it++ << endl;*/


		/*for (int o2 = 0; o2 < o; o2++)
				{
					cout << *it++ << endl;
				}*/
	//}
	//else
		//it = b.begin();	
	/*if (i > 'a' && i < 'z')
	{
		it = a.begin() + i;
		while (it != a.begin()+i+o)
			{
				cout << *it++ << endl;
			}
	}
	else
	{
		it = b.begin()+i;
		while (it != b.begin() + i + o)
		{
			cout << *it++ << endl;
		}
	}*/
		
	
	
}

int main()
{
	char i;
	int o;
	cout << "please cin English" << endl;
	cin >> i;
	cout << "plase cin remerber" << endl;
	cin >> o;
	_return(i, o);

	system("pause");
	return 0;
}