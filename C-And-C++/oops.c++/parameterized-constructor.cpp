#include<iostream>
using  namespace std;
class student 
{
    public:
    int rno;
    int marks;
    public:
    student(int a, int b)
    {
    rno=a;
    marks=b;
}
};
int  main()
{
    student s(101,99);
    cout<<s.rno<<endl;
    cout<<s.marks<<endl;
}
