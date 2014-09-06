#include "client.hpp"
#include <string>
using namespace std;


int Client::clinetNum=0;
string Client::serverName = "sina";

int main()
{
	Client Zhang,Li;
	cout<<"ServerName="<<Client::GetServerName()<<endl;
	Client::ChangeServerName("Baidu");
	cout<<"ServerName="<<Client::GetServerName()<<endl;
	cout<<"ClientNum="<<Client::GetClientNum()<<endl;
	Zhang.~Client();
	cout<<"ClientNum="<<Client::GetClientNum()<<endl;
	return(0);
}