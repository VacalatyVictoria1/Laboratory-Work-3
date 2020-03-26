#include <iostream>
#include <string>

using namespace std;

// Введите массив символов из 23 элементов.
// Определить является ли он палиндромом или нет.

string cat(string str, int& coun)
{
    for (int i = 0; i < str.length(); i++)
    {
        for (int j = i + 1; j < str.length(); j++)
        {
            if (str[i] == (char)23)
                swap(str[i], str[j]);
        }
        if (str[i] == (char)23)
            coun++;
    }
    return str;
}

int main()
{
    cout << "High level!" << endl;
    string str;
    int count = 0, coun = 0;
    cout << "Enter string: " << endl;
    getline(cin, str);

    str = cat(str, coun);
    cout << str << endl;

    for (int i = 0; i < (str.length() - coun) / 2; i++)
    {
        if (str[i] == str[str.length() - coun - 1 - i])
            count++;
    }
    if (count == (str.length() - coun) / 2)
        cout << "It is a palindrom " << endl;
    else
        cout << "It is not be a palindrom " << endl;
   // system("pause");
}
