#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str1;
	cout << str1 << endl;
	string str2("123456789");
	cout << str2 << endl;
	string str3(str2);
	cout << str3 << endl;
	string str4(str2, 3, 3);
	cout << str4 << endl;
	string str5("123456789", 5);
	cout << str5 << endl;
	string str6(10, '5');
	cout << str6 << endl;
	char* cr = new char[10]; 
	//

	cout << str2.length() << endl;
	cout << str2.size() << endl;
	str2.append("456");
	cout << str2 << endl;
	str2.append("123456789", 3);
	cout << str2 << endl;
	str2.append(str3, 3, 3);
	cout << str2 << endl;
	str1.assign(str2, 9, 6);
	cout << str1 << endl;
	cout << str1.compare(str2) << endl;
	str3.insert(6, str1, 3, 3);
	cout << str3 << endl;
	string str7 = str3.substr(0, 3);
	cout << str7 << endl;
	cout << str3.find(str4, 3) << endl;
	str3.replace(0, 3, str6);
	cout << str3 << endl;
}
