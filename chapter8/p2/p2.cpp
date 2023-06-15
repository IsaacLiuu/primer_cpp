#include <iostream>
#include <string>

using namespace std;

istream& print_istream(istream& in);

int main(void)
{
    print_istream(cin);
    return 0;
}

istream& print_istream(istream& in)
{
    string str;
    while(in >> str);
    cout << str << endl;
    in.clear();
    return in;
}