#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

int main()
{
    cout << "Please enter your first name: ";

    string name;
    cin >> name;

    cout<<"Please enter the number of lines: ";
    int line = 0;
    cin>>line;

    const string greeting = "Hello, " + name + "!";

    const string::size_type colls = greeting.size() + 2; //int
    const string star((greeting.size() - name.size())/2, '.');
    int r = 0;
    string::size_type c = 0;
    int rows = line;
    bool sup = true;

    cout << endl;

    r = 0;
    while (r != rows)
    {
        c = 0;
        while (c != colls)
        {
            if (r == 0 || c == 0 || c == colls - 1 || r == rows - 1)
            {
                cout << "*";
            }
            else if(r == (rows-1)/2 && c == 1){
                cout<<star<<name<<star;
                sup = false;
            }
            else if (sup == true)
            {
                cout << ".";
            }
            c++;
        }
        sup = true;
        cout << endl;
        r++;
    }
    Sleep(2000);
    cout<<endl;
    return 0;
}
