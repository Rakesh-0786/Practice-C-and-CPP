#include<iostream>
using namespace std;
 class student 
 {
    int roll;
    public:
    void getroll(int x)
    {
        roll=x;
    }
    void putroll()
    {
        cout<<"roll number"<<roll<<endl;
    }
 };
 class test:public student
 {
    protected:
    float t1,t2;
    public:
    void getmarks(float x,float y)
    {
        t1=x;
        t2=y;
    }
    void putmarks()
    {
        cout<<"marks obtained"<<endl;
        cout<<"test"<< t1<<endl;
        cout<<"test"<<t2<<endl;
    }
 };
 class sports
 {
    protected:
    float sp;
    public:
    void getsp(float X)
    {
        sp=X;
    }
    void putsp()
    {
        cout<<"sports score"<<sp<<endl;
    }
 
 };
 class result:public test,public sports
 {
    float total;
    public:
    void disp();
    
 };
 
void result::disp()
{
    total=t1+t2+sp;
    putroll();
    putmarks();
    putsp();
    cout<<"total score"<<total;
}
int main()
{
    result obj;
    obj.getroll(101);
    obj.getmarks(20.5, 87.8);
    obj.getsp(9.5);
    obj.disp();
    return 0;
}
