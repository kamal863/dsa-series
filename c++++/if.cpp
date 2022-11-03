#include<iostream>
using namespace std;

int main()
{
    char ch;
cout<<"enter the the value "<<endl;
  cin>>ch;
 if (ch>= 'A' && ch<= 'Z')
            cout<<"upper"<<endl;
        else if (ch>= 'a' && ch <= 'z')
            cout<<"lower"<<endl;
        else if (ch>= '0' && ch<= '9')
            cout<<"numeric";
        else
            cout<<"enter valid number";

return 0;
}