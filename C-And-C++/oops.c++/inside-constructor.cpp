#include <iostream>
using namespace std;
 
class student 
{
   public:
    int rno;
    char name[10];
    
 
public:
    student()
    {
        cout << "Enter the RollNo:";
        cin >> rno;
        cout << "Enter the Name:";
        cin >> name;
        
    }
 
    void display()
    {
        cout << endl << rno << "\t" <<" name" ;
    }
};
 
int main()
{
    student s; // constructor gets called automatically when
               // we create the object of the class
    s.display();
 
    return 0;
}