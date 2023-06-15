#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    return 0;
}

istream& print_istream(istream& in)
{
    string str;
    while(in >> str)
    {
        if(in.eof() == true)
        {
            break;
        }
    }
    cout << str << endl;
    in.clear();
    return in;
}