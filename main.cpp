#include <iostream>

using namespace std;
void say(string word);

int main()
{
    cout << "My name is Sarah!" << endl;
    cout << "Hello World!" << endl;
    say("Hi");
    return 0;
}

void say (string word)
{
    cout << word << endl;
}