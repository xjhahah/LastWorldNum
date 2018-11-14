#include <iostream>
#include <string>
using namespace std;

class Lastworld
{
public:
	size_t LastWorldNum()
	{
		string s;
		size_t len;
		//这里用 getline()函数是因为如果我们输入的是一个语句的话中间势必会有空格，如果用普通的cin输入的话，遇到空格就会停止读取数据，最终得到的结果会出人意料
		while (getline(cin, s))
		{
			size_t pos = s.rfind(' ');
			len = s.size() - pos - 1;  //这里减一操作是把空格那个数减掉才是最后一个字符串的长度
			cout << len << " " << endl;
		}	
		return len;
	}
private:
	char* _str;
};
int main()
{
	Lastworld s;
	s.LastWorldNum();
	return 0;
}