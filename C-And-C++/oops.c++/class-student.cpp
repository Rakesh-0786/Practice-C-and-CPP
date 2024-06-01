#include<iostream>
using namespace std;
class student
{
    public:
    int roll ;
    char name;
    public:
    void get()
    {
        cin>>roll;
        cin>>name;

    }
    void show()
    {
        cout<<roll ;
        cout<< name;

    }
};
int  main()
{
    student s1,s2;
    s1.get();
    s2.get();
    s1.show();
    s2.show();
 return 0;
}
    

