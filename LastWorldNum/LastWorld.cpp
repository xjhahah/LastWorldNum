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
		//������ getline()��������Ϊ��������������һ�����Ļ��м��Ʊػ��пո��������ͨ��cin����Ļ��������ո�ͻ�ֹͣ��ȡ���ݣ����յõ��Ľ�����������
		while (getline(cin, s))
		{
			size_t pos = s.rfind(' ');
			len = s.size() - pos - 1;  //�����һ�����ǰѿո��Ǹ��������������һ���ַ����ĳ���
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