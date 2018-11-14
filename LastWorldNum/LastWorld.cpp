#include <iostream>
#include <string>
using namespace std;

class Lastworld
{
public:
	size_t LastWorldNum(string s)
	{
		size_t len;
		while (getline(cin, s))
		{
			size_t pos = s.rfind(' ');
			len=s.size() - pos - 1;
			cout << len << " " <<endl;
		}
		cout << len << endl;
		return len;
	}
private:
	char* _str;
};
int main()
{
	Lastworld s;
	s.LastWorldNum(" ");
	return 0;
}