#include<iostream>
using namespace std;

namespace namespace1{
    int age = 25;
}

namespace namespace2{
    int age = 25;
}

int main(){
    cout <<namespace1::age;
    system("pause>0");
}