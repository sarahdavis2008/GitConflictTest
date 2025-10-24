#include <iostream>

using namespace std;
int add(int a, int b);

int main()
{
    cout << "My name is Sarah!" << endl;
    cout << "Hello World!" << endl;

    cout << "5 + 7 = " << add(5, 7) << endl;
    return 0;
}

int add(int a, int b)
{
    return a + b;
}