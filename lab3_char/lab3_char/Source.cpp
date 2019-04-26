#include<iostream>
#include<string>

using namespace std;

string cat(string str, int &coun)
{
	for (int i = 0; i < str.length(); i++)
	{
		for (int j = i + 1; j < str.length(); j++)
		{
			if (str[i] == (char)32)
				swap(str[i], str[j]);
		}
		if (str[i] == (char)32)
			coun++;
	}
	return str;
}

int main()
{
	setlocale(LC_ALL, "ru");
	string str;
	int count = 0, coun = 0;
	cout << "Enter string: \n";
	getline(cin, str);

	str = cat(str, coun);
	cout << str << endl;

	for (int i = 0; i < (str.length() - coun) / 2; i++)
	{
		if (str[i] == str[str.length() - coun - 1 - i])
			count++;
	}
	if (count == (str.length() - coun) / 2)
		cout << "It is a palindrom\n";
	else
		cout << "It is not be a palindrom\n";
	system("pause");
	return 0;
}