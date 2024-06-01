#include<iostream>
#include<string.h>
using namespace std;
class Person
{
    private:
    int age;
    char name[20];
    protected:
    void setName(char*n)
    {
        strcpy(name, n);

    }
    void setAge(int a)
    {
        age=a;
    }
    public:
    char* getName()
    {
        return (name);

    }
    int getAge()
    {
        return(age);

    }
};
class Employee:public Person
{
    private:
    float Sallary;
    protected:
    void setSallary(float s)
    {
        Sallary=s;
    }
    float getSallary()
    {
        return (Sallary);

    }
    public:
    void setEmployee(char*n,int a,flaot s)
    {
        setName(n);
        setAge(a);
        setSallary(s);
    }
    void show Employee();
    {
        cout<<getName()<<endl<<getAge()<<endl<<getSallary()<<endl;
    }
    };
    int main()
    {
        Employee emp;
        emp.setEmployee("rakesh",18,35000.8);
        emp.showEmployee();

    }
