#include<iostream>
#include<iostream>
using namespace std;
template <class T>
void display(T x)
{
    cout<<"Templete display:"<<x<<"\n";
}
void display (int x)
{
    cout<<"Explicit display: "<< x <<"/n";
}
int main()
{
    display(100);
    display(12.34);
    display('c');
    return 0;
}