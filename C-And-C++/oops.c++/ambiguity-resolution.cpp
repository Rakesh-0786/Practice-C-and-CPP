#include<iostream>
using namespace std;
class M
{
public:

void display(void)
{
    cout<<"class M"<<endl;

}
};
class N
{
    public:
    void display(void)
    {
    
        cout<<"class "<<endl;
    }
};
class P:public M , public N 
{
public:
void display(void)   // override display() of M and N 
{
    M:: display();

}
};
int main()
{
    P p;
    p.display();

}
