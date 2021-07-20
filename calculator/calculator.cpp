#include <iostream>
using namespace std;
class Calculator{
    public:
    int Calculate (int, int, char);
};

int main()
{
    int x, y, result;
    char oper;
    cout << "Hello! I am Calculator!"<<endl;
    cout << "Please enter num1 num2 and operator : "<<endl;
    cin >>x>>y>>oper;
    Calculator c;
    result = c.Calculate(x, y, oper);
    cout <<"result is: "<<result<<endl;
    cin.ignore();
    cin.get();
    return 0;
}

int Calculator::Calculate(int x, int y, char oper)
{
    switch (oper)
    {
    case '+':
        return x + y;
    case '-':
        return x - y;
    case '*':
        return x * y;
    case '/':
        if (y != 0)
            return x / y;
    default:
        cin >> x >> y >> oper;
        Calculate(x, y, oper);
    }
}

