#include<iostream>
using namespace std;

int main()
{
    cout<<"helloworld"<<endl;
    string fruit="apple";
    string fruits[5]={"apple","orange","pear","strawberry","banana"};
    string meat[3]={"beef","mutton","chicken"};
    for(int i=0;i<5;i++)
    {
        cout<<fruits[i]<<endl;
    }
    for(int i=0;i<3;i++)
    {
        cout<<meat[i]<<endl;
    }
    return 0;
}