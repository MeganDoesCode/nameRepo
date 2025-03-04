#include <iostream>
using namespace std;

void printAge(int year);

int main()
{
    cout<<"GitHub Demo"<<endl;
    printAge(2026);
    return 0;
}

void printAge(int year)
{
    int age = year - 1999;
    cout<<"Megan Jensen ("<<age<<")"<<endl;
}