#include<iostream>
using namespace std;

namespace namespace1{
    int age = 25;
    string name = "Yi Ping";
}

namespace namespace2{
    int age = 26;
}

int main()
{
    cout <<namespace1::name<<endl;
    cout <<namespace2::age<<endl;
    system("pause>0");
}