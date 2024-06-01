#include <iostream>
using namespace std;
class student
{
public:
    int rno;
    int marks;

public:
    student(int a, int b)
    {
        rno = a;
        marks = b;
    }
};
student(student &s)
{

    rno = s.rno;
    marks = s.marks;
}

int main()
{
    students 1(12, 56);
    students 2 = (s1);
    return 0;
}
