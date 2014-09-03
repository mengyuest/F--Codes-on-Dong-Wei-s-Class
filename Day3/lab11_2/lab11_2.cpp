//lab11_2.cpp

#include <iostream>
#include <fstream>
#include <strstream>
using namespace std;

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		cout << "请将文件名以参数传入！" << endl;
	}
	else
	{
		strstream str;
		ifstream in(argv[1], ios_base::binary);
		str << in.rdbuf();

		char buf[100];
		int line = 1;
		ofstream out(argv[1], ios_base::binary);
		while (str.getline(buf, sizeof(buf)))
		{
			out.setf(ios::right, ios::adjustfield);
			out.width(1);
			out << line++ << "." << buf << endl;
		}
	}
	return 0;
}
