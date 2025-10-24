#include <iostream>

using namespace std;

void say(string word);
int add(int a, int b);

int main()
{
    cout << "My name is Sarah!" << endl;
    cout << "Hello World!" << endl;
    say("Hi");
    cout << "5 + 7 = " << add(5, 7) << endl;
    return 0;
}

void say (string word)
{
    cout << word << endl;
    return 0;
}

int add(int a, int b)
{
    return a + b;
}